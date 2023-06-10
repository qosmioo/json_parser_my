#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"

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


void MainWindow::on_pbt_open_file_clicked()
{
    std::string file_path = QFileDialog::getOpenFileName(this, " ", "C:\\Users", "*.json").toStdString();
    Work_with_file w;
    Fasade f(w);
    std::string s = f.read_operation(file_path);
    ui->plainTextEdit_result->setPlainText(QString::fromStdString(s));
    //Fasade f = new Fasade(new Work_with_file);
}
