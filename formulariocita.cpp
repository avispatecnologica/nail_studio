#include "formulariocita.h"
#include "ui_formulariocita.h"
#include "Cita.h"
#include "Servicio.h"
#include <QMessageBox>

FormularioCita::FormularioCita(gestorCitas& g, int& contador, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FormularioCita)
    , gestor(g)
    , contadorId(contador)
{
    ui->setupUi(this);

    // Llenar el combo con los servicios disponibles
    ui->comboServicio->addItem("Manicure");
    ui->comboServicio->addItem("Nail Art");
    ui->comboServicio->addItem("Pedicure");
    ui->comboServicio->addItem("Gelish");
}

FormularioCita::~FormularioCita()
{
    delete ui;
}

void FormularioCita::on_btnGuardar_clicked()
{
    string nombre = ui->inputNombre->text().toStdString();

    if(nombre.empty()) {
        QMessageBox::warning(this, "Error", "Por favor ingresa el nombre");
        return;
    }

    // Crear el servicio según lo seleccionado
    Servicio s(ui->comboServicio->currentIndex() + 1,
               30,
               ui->comboServicio->currentText().toStdString(),
               15.0);

    // Obtener fecha y hora como números
    int dia = ui->dateEdit->date().day();
    int mes = ui->dateEdit->date().month();
    int hora = ui->timeEdit->time().hour();
    int minutos = ui->timeEdit->time().minute();

    Diseno d;
    Cita c(contadorId++, nombre, s, d, mes, dia, minutos, hora);
    gestor.reservarCita(c);

    QMessageBox::information(this, "Éxito", "Cita registrada correctamente!");
    this->close();
}