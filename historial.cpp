#include "historial.h"
#include "ui_historial.h"

Historial::Historial(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Historial)
{
    ui->setupUi(this);
}

Historial::~Historial()
{
    delete ui;
}
