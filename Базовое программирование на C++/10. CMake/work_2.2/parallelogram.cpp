#include <iostream>
#include <string>

#include "parallelogram.h"

parallelogram::parallelogram(std::string name, int A, int B, double a, double b) : Quadr::Quadr(name, A, B, A, B, a, b, a, b) {};
