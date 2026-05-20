#ifndef FORMULARIOCITA_H
#define FORMULARIOCITA_H

#include <QDialog>
#include "gestorCitas.h"
namespace Ui {
class FormularioCita;
}

class FormularioCita : public QDialog
{
    Q_OBJECT

public:
    explicit FormularioCita(gestorCitas& g,int& contador,QWidget *parent = nullptr);
    ~FormularioCita();

private slots:
    void on_btnGuardar_clicked();
private:
    Ui::FormularioCita *ui;
    gestorCitas& gestor;
    int& contadorId;
};

#endif // FORMULARIOCITA_H
