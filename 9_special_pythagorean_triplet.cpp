#include <iostream>
#include <cmath>
int main()
{
    int wantedsum = 1000;
    int a = wantedsum;
    int b = wantedsum;
    int ansi;
    int ansx;
    for (int x = 0; x < wantedsum; x += 1)
    {
        ansx = b-x;
        //std::cout << "\n";

        for (int i = 0; i < wantedsum/4; i += 1)
        {
            ansi = a-i;
            ansi = ansi-ansx;
            if ((ansi > 0) && (pow(i, 2) + pow(ansi, 2) == pow(ansx, 2)))
            {
                std::cout << i << ' ' << ansi << ' ' << ansx << "\n";
            }
            

        }
    }
}


/*
#include "stdio.h"
int main()
{
	int a,b,c;

	for (a=1;a<333;a++)
		for (b=a+1;b<500;b++)
		{
		   c=1000-a-b;
		   if (c>b)
		   {
		      if (a*a+b*b==c*c)
		      	printf("a=%d b=%d c=%d a*b*c=%d\n",a,b,c,a*b*c);
		   }
		}
	return 0;
}
*/