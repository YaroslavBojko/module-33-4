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

template <typename T>
void average(T array[8])
{
    T sum = 0;
    for (int i = 0; i < 8; ++i)
    {
        sum += array[i];
    }

    std::cout << "Average = " << sum / 8 << std::endl;
}

int main() {
    int array[8];
    //double array[8];

    input(array);
    average(array);
}
