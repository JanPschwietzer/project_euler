//
//  main.cpp
//  3_palindrome
//
//  Created by Jan Schwietzer on 31.03.21.
//

#include <iostream>

int multiply();
int reverse(int zahl);


int main()
{
    std::cout << "Dieses Programm ist nicht interaktiv und gibt das höhste Palindrom zwei dreistelliger zahlen aus.\n";
    std::cout << multiply() << std::endl;
}


// This function does the comparison

int multiply()
{
    int ergebnis = 0;
    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            int testZahl = i * j;
            int testZahl2 = reverse(testZahl);
            if (testZahl == testZahl2 && testZahl > ergebnis)//is it a palindrome? is it bigger than the last biggest?
            {
                ergebnis = testZahl;
            }
        }
    }
    return ergebnis;
}


// This function turnes the number you have chosen into its opposite!

int reverse(int zahl)
{
    if (zahl >= 10)
    {
        int digit = zahl % 10;
        zahl /= 10;
        
        int ergebnis = digit;
        
        while (zahl > 0)
        {
            int digit = zahl % 10;
            zahl /= 10;
            
            ergebnis *= 10;
            ergebnis += digit;
        }
        return ergebnis;
    }
    
    return zahl;
}
