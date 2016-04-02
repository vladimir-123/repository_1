#include <iostream>

void PtrTest(int number, int* pointer){
    std::cout << "in a function number is " << number << std::endl
    << "pointer is " << pointer << std::endl
    << "*pointer is " << *pointer << std::endl
    << "&number is " << &number << std::endl; //мой компилятор вывел адресс на ячейку памяти
    //отличную от px
}

int main(int argc, char const *argv[]){
    int x = 5;
    int* px = &x;
    std::cout << "px is " << px << std::endl;
    
    PtrTest(x, px);

    return 0;
}