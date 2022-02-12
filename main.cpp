#include <iostream>
#include "Zespolona.h"

int main()
{
    Zespolona z1 {5, 1 };
    Zespolona z2{ 0, 5 };

    Zespolona w;
    w = z1 + z2;

    std::cout << w << std::endl;
}
