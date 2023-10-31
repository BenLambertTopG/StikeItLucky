#include <iostream>

main()
{

    int num1{}, num2{};

    std::cout << "Enter two different integers seperated by a space: ";
    std::cin >> num1 >> num2;

    if (num1 != num2)
    {

        std::cout << "The higher of those ie " << ((num1 > num2) ? num1 : num2) << std::endl;
        std::cout << "The lower of those is " << ((num1 < num2) ? num1 : num2) << std::endl;
    }
    else
    {
        std::cout << "The numbers are the same dumbass" << std::endl;
    }

    return 0;
}