#include <iostream>

int main()
{
    // prints the sum of a set of integers read from cin

    int val = 0;
    int sum = 0;

    for (int i = 0; std::cin >> val; i++)
    {
        sum += val;
    }

    std::cout << "The sum of the entered numbers is: " << sum << std::endl;
}

