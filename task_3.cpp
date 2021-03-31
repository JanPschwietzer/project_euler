//
//  main.cpp
//  3_primefactor
//
//  Created by Jan Schwietzer on 31.03.21.
//

#include <iostream>

long berechnung(long zahl);
long ist_primzahl(long zahl);

int main()
{
    long x = 0;
    std::cout << "Dieses Programm berechnet die größte Zahl durch die sich Ihre angegebene Zahl teilen lässt\n";
    std::cout << "Geben Sie Ihre Wunschzahl an: ";
    std::cin >> x;
    if (x != 0)
    {
        std::cout << berechnung(x) << std::endl;
    }
    
    return 0;
}


// This function is checking if your number is divisible by that number & if yes if that number is a prime number.
//
long berechnung(long zahl)
{
    long ergebnis = 0;
    
    for (long i = (zahl + 1) / 2; i > 2; i--)
    {
        if (zahl % i == 0 && i % 2 != 0)
        {
            if (ist_primzahl(i))
            {
                ergebnis = i;
                return ergebnis;
            }
        }

    }
    return 0;
}


// This function checks if the desired number is only divisible by itself and 1.
//
long ist_primzahl(long zahl)
{
    for (long i = 3; i < (zahl + 1) / 2; i++)
    {
        if (zahl % i == 0)
        {
            return 0;
        }
    }
    return zahl;
}
