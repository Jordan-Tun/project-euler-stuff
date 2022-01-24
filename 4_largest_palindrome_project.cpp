#include <iostream>
#include <string>
#include <cstring>

int main()
{

    
    for (int y{ 999 }; y > 99; y -= 1)
    {
        for (int x{ 999 }; x > 99; x -= 1)
        {
            std::string str = std::to_string(x * y);
            if (str[0] == str[str.length() - 1] && str[1] == str[str.length() - 2] && str[2] == str[str.length() - 3])
            {
                if (str.length() >= 6)
                {
                    if (str[0] == '9')
                    {
                        std::cout << str << ' ';
                    }
                }

            }
        }


    }
    return 0;
}