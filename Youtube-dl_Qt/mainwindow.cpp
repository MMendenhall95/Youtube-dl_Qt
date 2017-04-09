#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

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
        Options *options = new Options(ui->cleanChk->checkState(), ui->directoryInput->text());
        qDebug() << options->getDirectory();
        linkInputs->download(options, ui->linkBox->text());
        delete options;

    }else{
        //Options *options = new Options(ui->cleanChk->checkState());
       // linkInputs->download();
       // delete options;
    }
}

void MainWindow::on_pushButton_clicked()
{
    linkInputs->listLinks(ui->linkBox->text());
    ui->linkNum->setText(QString::number(linkInputs->getCounter()));
}
