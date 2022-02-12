//
// Created by macie on 12.02.2022.
//

#ifndef OPERATORY_ZESPOLONA_H
#define OPERATORY_ZESPOLONA_H

#include <iostream>


class Zespolona {
    double re;
    double im;

public:
    explicit Zespolona(const double &r = 0 , const double &i = 0);

    void info();

    Zespolona operator+ (const Zespolona &z1) const;
    Zespolona operator-() const;
    Zespolona & operator+=(const Zespolona &z1);

    friend Zespolona operator- (const Zespolona &z1, const Zespolona &z2);
    friend std::ostream &operator << (std::ostream &str, const Zespolona &z1);

};

Zespolona operator- (const Zespolona &z1, const Zespolona &z2);

std::ostream &operator << (std::ostream &str, const Zespolona &z1);


#endif //OPERATORY_ZESPOLONA_H
