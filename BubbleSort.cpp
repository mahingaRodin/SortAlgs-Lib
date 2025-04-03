#include "../include/SortingAlgorithms.hpp"

namespace SortingAlgorithms {
    template<typename T>
    void bubbleSort(std::vector<T> &arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1;i++) {
            bool swapped = false;
            for (int k = 0; k < n - i - 1; k++) {
                if(arr[k] < arr[k+1]) {
                    std::swap(arr[k], arr[k + 1]);
                    swapped = true;
                }
            }
            if(!swapped)
                break;
        }
    }

    template void bubbleSort<int>(std::vector<int>&);
    template void bubbleSort<double>(std::vector<double>&);
    template void bubbleSort<float>(std::vector<float>&);
}