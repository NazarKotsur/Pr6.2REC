#include <iostream>
#include <climits>
#include <iomanip>

void fillArrayRecursive(int arr[], int size, int index = 0) {
    if (index == size) {
        return;
    }

    std::cout << "Enter element " << index << ": ";
    std::cin >> arr[index];

    fillArrayRecursive(arr, size, index + 1);
}

void printArrayRecursive(const int arr[], int size, int index = 0) {
    if (index == size) {
        std::cout << std::setw(3) << std::endl << std::endl;
        return;
    }

    std::cout << std::setw(3) << arr[index] << " ";
    printArrayRecursive(arr, size, index + 1);
}

int sumOddIndexedElements(const int arr[], int size, int index = 1) {
    if (index >= size) {
        return 0;
    }

    return arr[index] + sumOddIndexedElements(arr, size, index + 2);
}

void swapMinMaxRecursive(int arr[], int size, int currentIndex = 1, int minIndex = 0, int maxIndex = 0) {
    if (currentIndex == size) {
        std::swap(arr[minIndex], arr[maxIndex]);
        return;
    }

    if (arr[currentIndex] < arr[minIndex]) {
        minIndex = currentIndex;
    }
    else if (arr[currentIndex] > arr[maxIndex]) {
        maxIndex = currentIndex;
    }

    swapMinMaxRecursive(arr, size, currentIndex + 1, minIndex, maxIndex);
}

int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cerr << "Invalid array size\n";
        return 1;
    }

    int* arr = new int[size];

    fillArrayRecursive(arr, size);

    std::cout << "Array before swapping min and max elements:\n";
    printArrayRecursive(arr, size);

    swapMinMaxRecursive(arr, size);

    std::cout << "Array after swapping min and max elements:\n";
    printArrayRecursive(arr, size);

    int result = sumOddIndexedElements(arr, size);
    std::cout << "Sum of elements with odd indices: " << result << std::endl;

    delete[] arr;

    return 0;
}