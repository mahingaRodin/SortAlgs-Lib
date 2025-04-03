#include "../include/SortingAlgorithms.hpp"
#include <iostream>

namespace SortingAlgorithms {
    template <typename T>
    void printArray(const std::vector<T> &arr) {
        for (const auto& elem : arr) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }

    template <typename T>
    void testAllSorts(std::vector<T> arr) {
        std::cout << "Original array: ";
        printArray(arr);

        std::vector<T> temp;

        std::cout << "\n Testing BubbleSort: \n";
        temp = arr;
        bubbleSort(temp);
        printArray(temp);
        
        std::cout << "\nTesting Selection Sort:\n";
        temp = arr;
        selectionSort(temp);
        printArray(temp);
        
        std::cout << "\nTesting Insertion Sort:\n";
        temp = arr;
        insertionSort(temp);
        printArray(temp);
        
        std::cout << "\nTesting Merge Sort:\n";
        temp = arr;
        mergeSort(temp);
        printArray(temp);
        
        std::cout << "\nTesting Quick Sort:\n";
        temp = arr;
        quickSort(temp);
        printArray(temp);
    }

    // Explicit template instantiation for common types
    template void printArray<int>(const std::vector<int>&);
    template void printArray<double>(const std::vector<double>&);
    template void printArray<float>(const std::vector<float>&);
    
    template void testAllSorts<int>(std::vector<int>);
    template void testAllSorts<double>(std::vector<double>);
    template void testAllSorts<float>(std::vector<float>);

} // namespace SortingAlgorithms
    