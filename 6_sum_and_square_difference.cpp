#include <iostream>
#include <math.h>
int squareofsums(int n)
{
    for (int i{n-1}; i > 0; i -= 1)
    {
        n += i;
    }
    return pow(n, 2);
}

int sumofsquare(int n)
{
    for (int i{n}; i > 0; i -= 1)
    {
        n += pow(i, 2);
    }
    return n;
}

int main()
{
    int number{100};
    std::cout << squareofsums(number) - (sumofsquare(number) - number) << "\n";

    return 0;
}