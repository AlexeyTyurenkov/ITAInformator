#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButton_clicked(bool checked)
{
    QMessageBox msgBox;
    msgBox.setText("Hello World1!");
    msgBox.setWindowTitle("Checking for update.");
    msgBox.setWindowModality(Qt::WindowModal);
    msgBox.exec();
}
