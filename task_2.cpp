// This algorithm is for solving Project Eulers second task.

#include <iostream>

int fibonacci(int x, int y);
int sum(int max);

int main()
{
    int maximalwert;
    
    std::cout << "Das Programm berechnet die Summe aller geraden Fibonaccizahlen bis zur angegebenen Maximalmenge\n";
    std::cout << "Geben Sie Ihren Maximalwert an: ";
    std::cin >> maximalwert;
    
    std::cout << sum(maximalwert) << std::endl;
    
    return 0;
}

int fibonacci(int x, int y)
{
    return x + y;
}

int sum(int max)
{
    int x = 1;
    int y = 2;
    int z = 0;
    int ergebnis = 0;
    
    do
    {
        if (y % 2 == 0)
        {
            ergebnis += y;
        }
        
        z = fibonacci(x, y);
        x = y;
        y = z;
        
        if (z > max)
        {
            break;
        }
    } while (true);
    
    return ergebnis;
}
