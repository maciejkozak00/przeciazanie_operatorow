//
// Created by macie on 12.02.2022.
//

#include "Zespolona.h"

#include <iostream>

Zespolona::Zespolona(const double &r, const double &i) : re(r), im(i)
{

}

void Zespolona::info()
{
    std::cout << re << '+' << im << 'i' << std::endl;
}

Zespolona Zespolona::operator+(const Zespolona &z1) const
{
    Zespolona w;

    w.re = this->re + z1.re;
    w.im = this->im + z1.im;

    return w;
}

Zespolona Zespolona::operator-() const {
    return Zespolona { -re, -im };
}


Zespolona operator-(const Zespolona &z1, const Zespolona &z2) {
    Zespolona w;

    w.re = z1.re - z2.re;
    w.im = z1.im - z2.im;

    return w;
}

Zespolona &Zespolona::operator+=(const Zespolona &z1) {
    this -> re += z1.re;
    this -> im += z1.im;

    return *this;
}

std::ostream &operator<<(std::ostream &str, const Zespolona &z1)
{
    str << z1.re << '+' << z1.im << 'i';

    return str;
}


