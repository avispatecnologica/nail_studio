#ifndef PANTALLAADMIN_H
#define PANTALLAADMIN_H
#include "gestorCitas.h"
#include <QDialog>

namespace Ui {
class PantallaAdmin;
}

class PantallaAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit PantallaAdmin(gestorCitas& g, QWidget *parent = nullptr);
    ~PantallaAdmin();
private slots:
    void on_btnAtender_clicked();
     void on_btnNuevaCita_clicked();
    void actualizarTabla();
private:
    Ui::PantallaAdmin *ui;
     gestorCitas& gestor;
      int contadorId = 1;
};

#endif // PANTALLAADMIN_H
