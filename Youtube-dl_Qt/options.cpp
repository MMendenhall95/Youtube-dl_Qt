#include "options.h"

Options::Options(bool clean, QString downloadDirectory)
{
    this->clean = clean;
    this->downloadDirectory = downloadDirectory;
}

bool Options::isClean(){
    return clean;
}

QString Options::getDirectory(){
    return downloadDirectory;
}
