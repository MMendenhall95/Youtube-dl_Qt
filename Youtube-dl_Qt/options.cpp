#include "options.h"

Options::Options(bool clean)
{
    this->clean = clean;
}

bool Options::isClean(){
    return clean;
}
