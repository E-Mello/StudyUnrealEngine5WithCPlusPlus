// Creator: Mello
#include <iostream>

int main()
{
    float rectangleWidth = 0;
    float rectangleLength = {0};

    std::cout << "Enter the width and Length of the rectangle: ";
    std::cin >> rectangleWidth >> rectangleLength;

    std::cout << "The area of the rectangle is: " << rectangleWidth * rectangleLength << std::endl;

    return 0;
}