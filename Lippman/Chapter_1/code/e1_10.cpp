#include <iostream>

int main()
{
    // program that prints numbers 10 to 0 using decrement operator

    int num = 10;

    std::cout << "Here are the numbers from 10 to 0" << std::endl;
    while (num != -1)
    {
        std::cout << num-- << std::endl;
    }
}
