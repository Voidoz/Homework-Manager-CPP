#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addwindow.h"
#include "helpwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionAdd_triggered()
{
    AddWindow addWindow;
    addWindow.setModal(true);
    addWindow.exec();
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionOpen_Help_Window_triggered()
{
    HelpWindow helpWindow;
    helpWindow.setModal(true);
    helpWindow.exec();
}
