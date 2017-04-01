#ifndef LINKHANDLER_H
#define LINKHANDLER_H

#include <QObject>
#include <QStringList>
#include <QString>

class LinkHandler : public QObject
{
    Q_OBJECT
public:
    explicit LinkHandler(QObject *parent = 0);

    void listLinks(QString);
signals:

public slots:
private:
    QStringList *links;
};

#endif // LINKHANDLER_H
