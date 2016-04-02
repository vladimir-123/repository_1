#include <iostream>

int main(int argc, char const *argv[])
{
    const int NUM_SIZE = 10;

    int numbers[NUM_SIZE];
    std::cout << "\nSize of int is " << sizeof(int);
    std::cout << "\nInteger sized array:\n";
    for (int i = 0; i < NUM_SIZE; ++i){
        numbers[i] = i + 1;
        std::cout << "Element № " << (i + 1)
        << " has adress: " << &numbers[i] << std::endl;
    }

    long int l_numbers[NUM_SIZE];
    std::cout << "\nSize of long int is " << sizeof(long int);
    std::cout << "\nLong sized array:\n";
    for (int i = 0; i < NUM_SIZE; ++i){
        l_numbers[i] = i + 1;
        std::cout << "Element № " << (i + 1)
        << " has adress: " << &l_numbers[i] << std::endl;
    }

    double d_numbers[NUM_SIZE];
    std::cout << "\nSize of double is " << sizeof(double);
    std::cout << "\nDouble sized array:\n";
    for (int i = 0; i < NUM_SIZE; ++i){
        d_numbers[i] = i + 1;
        std::cout << "Element № " << (i + 1)
        << " has adress: " << &l_numbers[i] << std::endl;
    }
// адреса элементов массовов находятся на удалении равном размеру типа
    return 0;
}