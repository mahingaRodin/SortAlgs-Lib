#include "../include/SortingAlgorithms.hpp"

namespace SortingAlgorithms {

    namespace {
        template <typename T>
        int partition(std::vector<T>& arr, int low, int high) {
            T pivot = arr[high];
            int i = low - 1;

            for (int j = low; j <= high - 1; j++) {
                if (arr[j] < pivot) {
                    i++;
                    std::swap(arr[i], arr[j]);
                }
            }
            std::swap(arr[i + 1], arr[high]);
            return i + 1;
        }

        template <typename T>
        void quickSortHelper(std::vector<T>& arr, int low, int high) {
            if (low < high) {
                int pi = partition(arr, low, high);
                quickSortHelper(arr, low, pi - 1);
                quickSortHelper(arr, pi + 1, high);
            }
        }
    }

    template <typename T>
    void quickSort(std::vector<T>& arr) {
        quickSortHelper(arr, 0, arr.size() - 1);
    }

    template void quickSort<int>(std::vector<int>&);
    template void quickSort<double>(std::vector<double>&);
    template void quickSort<float>(std::vector<float>&);

} // namespace SortingAlgorithms