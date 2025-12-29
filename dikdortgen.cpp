#include "Dikdortgen.h"
#include <iostream>

int Dikdortgen::objectCount = 0;

Dikdortgen::Dikdortgen(double l, double w) {
    setLength(l);
    setWidth(w);
    objectCount++;
}

Dikdortgen::~Dikdortgen() {
    objectCount--;
}

void Dikdortgen::setLength(double l) {
    if (l <= 0)
        length = 1;
    else
        length = l;
}

void Dikdortgen::setWidth(double w) {
    if (w <= 0)
        width = 1;
    else
        width = w;
}

double Dikdortgen::getLength() const {
    return length;
}

double Dikdortgen::getWidth() const {
    return width;
}

double Dikdortgen::alanHesapla() const {
    return length * width;
}

double Dikdortgen::cevreHesapla() const {
    return 2 * (length + width);
}

void Dikdortgen::whoAreYou() const {
    std::cout << "<- Rectangle" << std::endl;
}

int Dikdortgen::getCount() {
    return objectCount;
}

Dikdortgen Dikdortgen::operator+(const Dikdortgen& other) const {
    return Dikdortgen(length + other.length, width + other.width);
}
