//main header file 
#ifndef SORTING_ALGORITHMS_HPP
#define SORTING_ALGORITHMS_HPP

#include <vector>
#include<functional>

namespace SortingAlgorithms {
    //printing the array 
    template <typename T>
    void printArray(const std::vector<T> &arr);

    //top 5 sorting algorithms
    //bubble sort
    template <typename T>
    void bubbleSort(std::vector<T> &arr);

    // Selection Sort
    template <typename T>
    void selectionSort(std::vector<T>& arr);

    // Insertion Sort
    template <typename T>
    void insertionSort(std::vector<T>& arr);

    // Merge Sort
    template <typename T>
    void mergeSort(std::vector<T>& arr);

    // Quick Sort
    template <typename T>
    void quickSort(std::vector<T>& arr);

    // Utility function to test all sorting algorithms
    template <typename T>
    void testAllSorts(std::vector<T> arr);
}
#endif