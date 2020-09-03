#include <iostream>

void geek()
{
    int val[3] = {1, 2, 3};
    int *ptr;
    std::cout << val << "  " << &val << "  " << *val << std::endl;
    ptr = val;
    std::cout << *ptr << "  " << ptr[0] << "  " << ptr[0] << "  " << &ptr[0] << std::endl;
}

int main()
{
    geek();
    return 0;
}