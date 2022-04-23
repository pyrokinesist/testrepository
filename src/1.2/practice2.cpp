#include <iostream>

int sum(int a, int b, int c)
{
    int sum = a + b + c;
    return sum;
}

int main()
{
    std::cout << "sum(5, 1, -1): " << sum(5, 1, -1) << std::endl;
}