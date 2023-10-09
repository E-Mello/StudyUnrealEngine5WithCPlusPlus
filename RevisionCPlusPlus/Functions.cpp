// Creator: Mello
#include <iostream>

void myFunction()
{
    std::cout << "I just got executed!";
}

void myFunction02(std::string mName)
{
    std::cout << mName << " Is a month of the year" << std::endl;
}

int AddNums(int x, int y)
{
    return x + y;
}

int main()
{
    myFunction();

    myFunction02("Jan");
    myFunction02("Feb");
    myFunction02("Mar");
    myFunction02("Apr");

    std::cout << AddNums(5, 5) << std::endl;

    return 0;
}