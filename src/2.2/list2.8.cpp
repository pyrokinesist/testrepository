#include <iostream>

int main()
{
    int value = 42;
    std::cout << "valueのアドレスは" << &value << "で、値は" << value << std::endl;

    int& reference = value;
    std::cout << "referenceのアドレスは" << &reference << "で、値は" << reference << std::endl;

    reference = 0;
    std::cout << "valueのアドレスは" << &value << "で、値は" << value << std::endl;
}