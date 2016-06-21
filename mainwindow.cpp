#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include "csound.hpp"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	stopNow = false;
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
		//csound->Start();

		while (csound->PerformKsmps()==0 && !stopNow) { // set stopNow to true (by Stop button?)
			QCoreApplication::processEvents(); // not to freeze UI. Quick solution but bad practice this way. Better - run Csound in another thread
		}

        //perform entire score
		//csound->Perform();
		csound->Stop();
		stopNow = false; // allow restarting
        //free Csound object
        delete csound;

}

void MainWindow::on_pushButton2_clicked()
{
	stopNow = true;
}
