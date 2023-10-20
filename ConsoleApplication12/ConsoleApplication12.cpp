#include <iostream>


int main() {
    int h, sum, n = 0;
    std::cout << "Enter the number of H: ";
    std::cin >> h;

    std::cout << "Perfect numbers that are smaller than " << h << ": " << std::endl;
    for (int i = 2; i < h; i++) 
    {
        sum = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }            
        if (sum == i)
        {
            std::cout << i << std::endl;
            n++;
        }
    }
    if (n == 0)
        std::cout << "There are no perfect numbers";
}