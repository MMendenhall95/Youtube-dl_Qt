#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    linkInputs = new LinkHandler();
    ui->linkNum->setText(QString::number(linkInputs->getCounter()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_dwnBtn_clicked()
{
    if(ui->linkNum->text().toInt() < 1){
        options = new Options(ui->cleanChk->checkState());
        linkInputs->download(options, ui->linkBox->text());
    }else{

    }
}

void MainWindow::on_pushButton_clicked()
{
    linkInputs->listLinks(ui->linkBox->text());
    ui->linkNum->setText(QString::number(linkInputs->getCounter()));
}
