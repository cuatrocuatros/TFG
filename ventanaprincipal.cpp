#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"
#include <QDebug>
#include <QCoreApplication>
#include <QFile>
#include <QDir>
#include <QTemporaryFile>
#include <stdio.h>
#include "csound.hpp"
#include <iostream>

VentanaPrincipal::VentanaPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VentanaPrincipal)
{
    ui->setupUi(this);
}

VentanaPrincipal::~VentanaPrincipal()
{
    delete ui;
}

void VentanaPrincipal::on_pushButton_1_clicked()
{
    //Create an instance of Csound
    Csound* csound = new Csound();

    //compile instance of csound.
    csound->Compile("leermp3.csd");

    //prepare Csound for performance
    csound->Start();

    //perform entire score
    csound->Perform();

    //free Csound object
    delete csound;

    return 0;

}

void VentanaPrincipal::on_pushButton_3_clicked()
{

}
