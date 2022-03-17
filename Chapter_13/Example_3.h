#ifndef EXAMPLE3_H_
#define EXAMPLE3_H_
#include "head.h"
void Example_3();

class DMA
{
protected:
    char *label;
    int rating;

public:
    DMA();
    virtual ~DMA();
    virtual void View() = 0;
    DMA(const char *l = "null", int r = 0);
    DMA(const DMA &rs);
    virtual ostream &operator<<(DMA &rs);
};

class baseDMA : public DMA
{
public:
    baseDMA(const char *l = "null", int r = 0);
    baseDMA(const baseDMA &rs);
    virtual ~baseDMA();
    baseDMA &operator=(const baseDMA &rs);
    void View();
};

class lacksDMA : public DMA
{
private:
    enum
    {
        COL_LEN = 40
    };
    char color[COL_LEN];

public:
    lacksDMA(const char *c = "blank", const char *l = "null", int r = 0);
    lacksDMA(const char *c, const baseDMA &rs);
    void View();
    ~lacksDMA();
};

class hasDMA : public DMA
{
private:
    char *style;

public:
    hasDMA(const char *s = "none", const char *l = "null", int r = 0);
    hasDMA(const char *s, const baseDMA &rs);
    hasDMA(const hasDMA &hs);
    ~hasDMA();
    hasDMA &operator=(const hasDMA &rs);
    void View();
};

#endif