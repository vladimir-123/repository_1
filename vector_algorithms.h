#ifndef VECTOR_ALGORITHMS_H
#define VECTOR_ALGORITHMS_H

#include <iostream>
#include <cstdlib> // rand, NULL
#include <vector>
#include <ctime> // time
#include <random>

std::vector<int> GenerateRandomVector(size_t fSize, int fMin, int fMax);
std::vector<int> TrueGenerateRandomVector(size_t fSize, int fMin, int fMax);
void ShowVector(std::vector<int> v);
class SizeZero {};

#endif