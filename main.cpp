#include <iostream>
#include "QuickSort.h"

// using namespace std;

int main() {
    int n;
    std::cout << "Enter Number of elements you want to enter: ";
    std::cin >> n;
    int *arr = new int(n);
    for(int i=0; i<n; ++i){
        std::cout << "Enter Element: ";
        std::cin >> arr[i];
    }
    std::cout << "\n Before Sorting Elements are: \n";
    for(int i=0; i<n; ++i){
        std::cout << arr[i] << "\t";
    }
    std::cout << std::endl;
    sort::QuickSort(arr, 0, n);
    std::cout << "After Sorting Elements : \n";
    for(int i=0; i<n; ++i){
        std::cout << arr[i] << "\t";
    }
    delete[] arr;
}