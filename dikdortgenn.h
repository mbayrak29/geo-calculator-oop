#ifndef DIKDORTGEN_H
#define DIKDORTGEN_H

#include "Sekil.h"

class Dikdortgen : public Sekil {
private:
    double length;
    double width;
    static int objectCount;

public:
    Dikdortgen(double l, double w);
    virtual ~Dikdortgen();

    double alanHesapla() const override;
    double cevreHesapla() const override;
    void whoAreYou() const override;

    double getLength() const;
    double getWidth() const;

    void setLength(double l);
    void setWidth(double w);

    static int getCount();

    Dikdortgen operator+(const Dikdortgen& other) const;
};

#endif
