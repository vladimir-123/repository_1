#include "vector_algorithms.h"

std::vector<int> GenerateRandomVector(size_t fSize, int fMin, int fMax) {
    if(0 == fSize) throw SizeZero {};// проверка C++11
    
    std::vector<int> randVector;
    for (int i = 0; i < fSize; ++i) {
        srand(i + time(NULL) / fSize); // т.к. для размера уже всеравно написал проверку
        int tempRand = rand() % (1 + fMax - fMin) + fMin;
        randVector.push_back(tempRand);
    }

    return randVector;
}

std::vector<int> TrueGenerateRandomVector(size_t fSize, int fMin, int fMax) {
    if(0 == fSize) throw SizeZero {};// проверка C++11
    
    std::vector<int> randVector;
    for (int i = 0; i < fSize; ++i) {
        std::random_device rd; // другое случайное число
        int tempRand = rd() % (1 + fMax - fMin) + fMin;
        randVector.push_back(tempRand);
    }

    return randVector;
}

void ShowVector(std::vector<int> v) {
    std::cout << '[';
    for (int i = 0; i < v.size(); ++i)
    {
        if (i < v.size() - 1) {
            std::cout << v[i] << ", ";
        } else {
            std::cout << v[i] << "]\n";
        }
    }
}