#ifndef SEKIL_H
#define SEKIL_H

class Sekil {
public:
    virtual ~Sekil() = default;

    virtual double alanHesapla() const = 0;
    virtual double cevreHesapla() const = 0;
    virtual void whoAreYou() const = 0;
};

#endif

