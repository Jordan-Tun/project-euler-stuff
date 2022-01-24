#include <iostream>
int main()
{
    int primeno = 5;
    int primecheck = 11;
    long long total = 28;
coda:
    while (primecheck < 2e6) //<-- change this to total up to desired point (must be at least 13)
    {
        primecheck += 2;
    
        for(int i{5}; i < (primecheck/2); i += 6)
        {
            if (primecheck%i == 0 || primecheck%(i+2) == 0 || primecheck%3 == 0)
                goto coda;        
        }

        primeno += 1;
        total += primecheck;
        //std::cout << total << ' ';
    }
    std::cout << total;
    std::cin.get();
}