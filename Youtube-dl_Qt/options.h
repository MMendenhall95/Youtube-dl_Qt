#ifndef OPTIONS_H
#define OPTIONS_H
#include <QString>

class Options
{
public:
    Options(bool clean, QString downloadDirectory);
    bool isClean();
    QString getDirectory();
private:
    bool clean;
    QString downloadDirectory;
};

#endif // OPTIONS_H
