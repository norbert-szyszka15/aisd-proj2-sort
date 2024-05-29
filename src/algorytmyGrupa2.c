#include "algorytmyGrupa2.h"

void quickSort(int *arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void shellSort(int *arr, int arrSize) {
    for (int gap = arrSize / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < arrSize; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

void heapSort(int *arr, int arrSize) {
    for (int i = arrSize / 2 - 1; i >= 0; i--) {
        heapify(arr, arrSize, i);
    }

    for (int i = arrSize - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}