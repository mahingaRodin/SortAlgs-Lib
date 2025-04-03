#include "../include/SortingAlgorithms.hpp"
#include <vector>

namespace SortingAlgorithms {

    namespace {
        template <typename T>
        void merge(std::vector<T>& arr, int left, int mid, int right) {
            int n1 = mid - left + 1;
            int n2 = right - mid;

            std::vector<T> L(n1), R(n2);

            for (int i = 0; i < n1; i++)
                L[i] = arr[left + i];
            for (int j = 0; j < n2; j++)
                R[j] = arr[mid + 1 + j];

            int i = 0, j = 0, k = left;
            while (i < n1 && j < n2) {
                if (L[i] <= R[j]) {
                    arr[k] = L[i];
                    i++;
                } else {
                    arr[k] = R[j];
                    j++;
                }
                k++;
            }

            while (i < n1) {
                arr[k] = L[i];
                i++;
                k++;
            }

            while (j < n2) {
                arr[k] = R[j];
                j++;
                k++;
            }
        }

        template <typename T>
        void mergeSortHelper(std::vector<T>& arr, int left, int right) {
            if (left >= right) return;
            
            int mid = left + (right - left) / 2;
            mergeSortHelper(arr, left, mid);
            mergeSortHelper(arr, mid + 1, right);
            merge(arr, left, mid, right);
        }
    }

    template <typename T>
    void mergeSort(std::vector<T>& arr) {
        mergeSortHelper(arr, 0, arr.size() - 1);
    }

    template void mergeSort<int>(std::vector<int>&);
    template void mergeSort<double>(std::vector<double>&);
    template void mergeSort<float>(std::vector<float>&);

} // namespace SortingAlgorithms