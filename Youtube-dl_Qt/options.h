#ifndef OPTIONS_H
#define OPTIONS_H


class Options
{
public:
    Options(bool clean);
    bool isClean();
private:
    bool clean;
};

#endif // OPTIONS_H
