#pragma once

#include <iostream>
#include <memory>
#include <vector>

// Function declarations
void SetToZero();
// TODO 3.2: Change parameter to shared_ptr instead of int*
void PrintPointerValue(int* ptr);
// TODO 3.3: Change parameter to weak_ptr instead of shared_ptr
void SetToZeroAndPrint(std::shared_ptr<int> x);