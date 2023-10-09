// Creator: Mello
#include <iostream>

int main()
{
    double balance[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Balance value for element 0 is: " << balance[0] << std::endl;
    std::cout << "Balance value for element 5 is: " << balance[5] << std::endl;
    std::cout << "Balance value for element 9 is: " << balance[9] << std::endl;

    balance[0] = 14.3;
    balance[5] = 15.3;
    balance[9] = 20.3;

    std::cout << "Balance value for element 0 is: " << balance[0] << std::endl;
    std::cout << "Balance value for element 5 is: " << balance[5] << std::endl;
    std::cout << "Balance value for element 9 is: " << balance[9] << std::endl;

    return 0;
}