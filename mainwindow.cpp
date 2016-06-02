#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include "csound.hpp"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton1_clicked()
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

}
