#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_nailStudio.h"
#include "gestorCitas.h"
#include "gestorClientes.h"
class nailStudio : public QMainWindow
{
    Q_OBJECT

public:
    nailStudio(QWidget *parent = nullptr);
    ~nailStudio();
private slots:
    void on_BtnAdm_clicked();
    void on_BtnCliente_clicked();
private:
    Ui::nailStudioClass ui;
    gestorCitas gestor;
    //gestorClientes* gestorCli;
    int contador =1;
};

