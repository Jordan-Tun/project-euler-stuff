#include <iostream>
int main()
{
    int primeno = 5;
    int primecheck = 11;
coda:
    while (primeno != 10000) //<-- change this to find up the nth prime number (must be at least 6)
    {
        primecheck += 2;
    
        for(int i{5}; i < (primecheck/2); i += 6)
        {
            if (primecheck%i == 0 || primecheck%(i+2) == 0 || primecheck%3 == 0)
                goto coda;        
        }

        primeno += 1;
        std::cout << primecheck << ' ';
    }

    return 0;
}