#include <iostream>

template <typename T>
void input(T array[8])
{
    std::cout << "Fill the array (8): ";
    for (int i = 0; i < 8; ++i)
    {
        std::cin >> array[i];
    }
}

int main() {
    int array[8];
    //double array[8];

    input(array);

    for (int i = 0; i < 8; ++i)
    {
        std::cout << array[i] << " ";
    }
}
