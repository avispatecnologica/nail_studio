#include <QMessageBox>
#include "nailStudio.h"
#include "Cola.h"
#include "Pila.h"
#include "Servicio.h"
#include "Diseno.h"
#include "Cita.h"
#include "Cliente.h"
nailStudio::nailStudio(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
     //gestorCli = new gestorClientes();

    // Pruebas
    Servicio s1(1, 30, "Manicure Basico", 15.0);
    Diseno d1(1, "Floral Pastel", "Flores en rosa", "floral");
    Cita c1(1, "Valentina", s1, d1, 4, 28, 0, 10);
    Cliente cl1(1, "Valentina", 70012345);
    cl1.agregarCita(c1);

    Cola<Cita> colaDia;
    colaDia.encolar(c1);

    QMessageBox::information(this, "Prueba",
        QString::fromStdString("Citas en cola: " +
            to_string(colaDia.getTamano())));

}

nailStudio::~nailStudio()
{}
void nailStudio::on_BtnAdm_clicked()
{
    QMessageBox::information(this, "Acceso", "Bienvenida Administradora!");
}

void nailStudio::on_BtnCliente_clicked()
{
    QMessageBox::information(this, "Acceso", "Bienvenida Clienta!");
}
