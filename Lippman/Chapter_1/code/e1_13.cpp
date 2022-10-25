#include <iostream>

int main()
{
    // rewriting e1_9, e1_10 and e1_11 using for loops instead of while

    int ch;

    std::cout << "Select the program you wish to run" << std::endl;

    std::cout << "1. sum of numbers from 50 to 100" << std::endl;
    std::cout << "2. decrement operator to countdown" << std::endl;
    std::cout << "3. print range between two numbers" << std::endl;

    std::cin >> ch;

    if (ch == 1)
    {
        int sum = 0;
        for (int i = 50; i <= 100; i++)
        {
            sum += i;
        }

        std::cout << "The sum of all numbers from 50 to 100 is " << sum << std::endl;
    }
    else if (ch == 2)
    {
        std::cout << "Numbers from 10 to 0: " << std::endl;
        for (int i = 10; i >= 0; i--)
        {
            std::cout << i << std::endl;
        }
    }
    else if (ch == 3)
    {
        int start;
        int end;

        std::cout << "enter two numbers" << std::endl;

        std::cin >> start;
        std::cin >> end;

        std::cout << std::endl;

        if (start <= end)
        {
            for (int i = start; i <= end; i++)
            {
                std::cout << i << std::endl;
            }
        }
        else
        {
            for (int i = start; i >= end; i--)
            {
                std::cout << i << std::endl;
            }
        }

        
    }
}