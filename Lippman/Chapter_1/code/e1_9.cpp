#include<iostream>

int main()
{
    // sum of ALL numbers from 50 to 100

    int i = 0;
    int count = 50;

    while (count != 100)
    {
        i += count;
        count++;
    }

    std::cout << "The sum of all numbers from 1 to 100 is: " << i << std::endl;
}
