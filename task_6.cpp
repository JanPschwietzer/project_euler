//
//  main.cpp
//  6_sum_square
//
//  Created by Jan Schwietzer on 31.03.21.
//

#include <iostream>

int summe();
int square();


int main()
{
    int zahl1 = summe();
    int zahl2 = square();
    
    if (zahl1 > zahl2)
    {
        std::cout << zahl1 - zahl2 << std::endl;
    }
    else
    {
        std::cout << zahl2 - zahl1 << std::endl;
    }
    
    return 0;
}


// sum first

int summe()
{
    int ergebnis = 0;
    
    for (int i = 1; i <= 100; i++)
    {
        ergebnis += i;
    }
    
    return ergebnis * ergebnis;
}


// square first

int square()
{
    int ergebnis = 0;
    
    for (int i = 1; i <= 100; i++)
    {
        ergebnis += i * i;
    }
    
    return ergebnis;
}
