#include "linkhandler.h"

#include <QStringList>
#include <QDebug>

LinkHandler::LinkHandler(QObject *parent) : QObject(parent)
{
    process = new QProcess(parent);
    counter = 0;
}
void LinkHandler::listLinks(QString link){
    links << link;
    counter++;

}
void LinkHandler::download(Options *options, QString link){
    QStringList args;


    if(options->isClean()){
        args << link << "-o" << options->getDirectory().append("/%(title)s.%(ext)s");
        qDebug() << "DOWNLOADING!\n";
    }else{
        args << link;
    }

    process->start(QString("youtube-dl"), args);

}

void LinkHandler::download(){

}

int LinkHandler::getCounter(){
    return counter;
}
int LinkHandler::setCounter(){
    counter = 0;
    return counter;
}
