#include <iostream>

int main()
{
    // print a range of numbers between two user defined numbers

    int start;
    int end;

    std::cout << "enter 2 numbers" << std::endl;

    std:: cin >> start;
    std:: cin >> end;

    std::cout << "The range of numbers between the entered numbers is as follows: " << std::endl;

    if (start <= end)
    {
        while(start <= end)
        {
            std::cout << start++ << std::endl;
        }
    }
    else
    {
        while(end <= start)
        {
            std::cout << start-- << std::endl;
        }
    }

    
}