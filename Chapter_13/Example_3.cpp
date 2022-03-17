#include "Example_3.h"

void Example_3()
{
    DMA *p[3];
    p[0] = new baseDMA();
    p[1] = new hasDMA();
    p[2] = new lacksDMA();
    p[0]->operator<<(*p[0]);
}

DMA::DMA(const char *l, int r)
{
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}

DMA::DMA(const DMA &rs)
{
    delete[] label;
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
}

DMA::~DMA()
{
    delete[] label;
}

ostream &DMA::operator<<(DMA &rs)
{
    cout << label;
    cout << rating;
    return cout;
}

baseDMA &baseDMA::operator=(const baseDMA &rs)
{
    if (this == &rs)
    {
        return *this;
    }
    delete[] label;
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

baseDMA::baseDMA(const char *l, int r) : DMA(l, r)
{
}

baseDMA::baseDMA(const baseDMA &rs) : DMA(rs)
{
}

baseDMA::~baseDMA()
{
}

void baseDMA::View()
{
    cout << "The label is : " << label;
    cout << "The rating is : " << rating;
}

lacksDMA::lacksDMA(const char *c, const char *l, int r) : DMA(l, r)
{
    strcpy(color, c);
}

lacksDMA::lacksDMA(const char *c, const baseDMA &rs) : DMA(rs)
{
    strcpy(color, c);
}

void lacksDMA::View()
{
    cout << "The label is : " << label;
    cout << "The rating is : " << rating;
    cout << "The style is : " << color;
}

lacksDMA::~lacksDMA()
{
}

hasDMA::hasDMA(const char *s, const char *l, int r) : DMA(l, r)
{
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

hasDMA::hasDMA(const char *s, const baseDMA &rs) : DMA(rs)
{
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &hs) : DMA(hs)
{
    delete[] style;
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete[] style;
}

hasDMA &hasDMA::operator=(const hasDMA &rs)
{
    if (&rs == this)
    {
        return *this;
    }
    delete[] rs.style;
    delete[] rs.label;
    style = new char[strlen(rs.style) + 1];
    label = new char[strlen(rs.label) + 1];
    strcpy(style, rs.style);
    strcpy(label, rs.label);
    return *this;
}

void hasDMA::View()
{
    cout << "The label is : " << label;
    cout << "The rating is : " << rating;
    cout << "The style is : " << style;
}