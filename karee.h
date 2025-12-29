#ifndef KARE_H
#define KARE_H

#include "Dikdortgen.h"

class Kare : public Dikdortgen {
public:
    Kare(double l);
    ~Kare() override;

    void whoAreYou() const override;

    void setLength(double l);
    void setWidth(double w);
};

#endif

