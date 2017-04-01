#include "linkhandler.h"

#include <QStringList>
LinkHandler::LinkHandler(QObject *parent) : QObject(parent)
{
    process = new QProcess(parent);
}
void LinkHandler::listLinks(QString links){


}
void LinkHandler::download(Options *options, QString link){
   // QString args = link + "-o ./\"%(title)s.%(ext)s\"";
    QStringList args;
    QString program = "youtube-dl";



    if(options->isClean()){
        args << link << "-o" << "%(title)s.%(ext)s";
    }else{
        args << link;
    }

    process->start(program, args);

}
void LinkHandler::download(){

}
