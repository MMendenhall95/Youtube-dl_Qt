#ifndef LINKHANDLER_H
#define LINKHANDLER_H

#include <QObject>
#include <QStringList>
#include <QString>
#include <QProcess>

#include "options.h"


class LinkHandler : public QObject
{
    Q_OBJECT
public:
    explicit LinkHandler(QObject *parent = 0);

    void download();
    void download(Options *options, QString link);
    void listLinks(QString);
signals:

public slots:
private:
    QStringList *links;
    QProcess *process;
    QObject *parent;

};

#endif // LINKHANDLER_H
