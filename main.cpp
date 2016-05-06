#include "vector_algorithms.h"

int main(int argc, char const *argv[])
try {
    int size, min, max;
    std::cout << "Enter me size, min, max\n";
    std::cin >> size >> min >> max;
    std::vector<int> v = TrueGenerateRandomVector(size, min, max);
    ShowVector(v);
    return 0;
}

catch (SizeZero) {
    std::cerr << "Size must be > 0\n";
}