#include <iostream>
//this finds the smalles number divisible by 1 through 20
int main()
{
    int answer{360};
    int check{0};
    while (true)
    {
        answer += 360;
        check = 0;
        for (int i{1}; i<=20; i += 1)
        {
            
            if (answer%i == 0)
                check += 1;

        }

        if (check == 20)
            break;
        //std::cout << answer << ' ';
    
    }

    std::cout << answer;

    return 0;
}

//this takes a while. the answer is 232792560