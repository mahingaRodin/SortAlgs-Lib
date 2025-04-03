#include <iostream>
#include <vector>
#include "../include/SortingAlgorithms.hpp"

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    std::cout << "Testing all sorting algorithms:\n";
    SortingAlgorithms::testAllSorts(arr);
    
    return 0;
}