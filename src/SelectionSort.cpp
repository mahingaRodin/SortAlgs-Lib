#include"../include/SortingAlgorithms.hpp"

namespace SortingAlgorithms {
    template<typename T>
    void selectionSort(std::vector<T>& arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            int min_idx = 1;
            for (int k = i + 1; k < n; k++) {
                if(arr[k] < arr[min_idx]) {
                    min_idx = k;
                }
            }
            if(min_idx != i){
                std::swap(arr[i], arr[min_idx]);
            }
        }
    }

    template void selectionSort<int>(std::vector<int>&);
    template void selectionSort<double>(std::vector<double>&);
    template void selectionSort<float>(std::vector<float>&);
}