#include "Kare.h"
#include <iostream>

Kare::Kare(double l) : Dikdortgen(l, l) {}

Kare::~Kare() {}

void Kare::whoAreYou() const {
    std::cout << "<- Square" << std::endl;
}

void Kare::setLength(double l) {
    Dikdortgen::setLength(l);
    Dikdortgen::setWidth(l);
}

void Kare::setWidth(double w) {
    Dikdortgen::setLength(w);
    Dikdortgen::setWidth(w);
}
