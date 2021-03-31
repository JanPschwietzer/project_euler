//
//  main.cpp
//  5_smallest
//
//  Created by Jan Schwietzer on 31.03.21.
//

#include <iostream>

int divisible(int zahl);


int main()
{
    int zahl = 0;
    int counter = 20;
    
    while (!zahl) // divisible (zahl) returns 0 if it is not divisible by 1-20.
    {
        zahl = divisible(counter);
        counter++;
    }
    
    std::cout << zahl << std::endl;
}


// check if your number is divisible by numbers 1-20.
//
int divisible(int zahl)
{
    for (int i = 2; i <= 20; i++)
    {
        if (zahl % i != 0)
        {
            return 0;
        }
    }
    return zahl;
}
