#include "algorytmyGrupa1.h"

void insertSort(int *arr, int arrSize) {
    int i, j, key;

    for (i = 1; i < arrSize; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int *arr, int arrSize) {
    int i, j, min;

    for (i = 0; i < arrSize - 1; i++) {
        min = i;
        for (j = i + 1; j < arrSize; j++)
            if (arr[j] < arr[min])
                min = j;

        swap(&arr[min], &arr[i]);
    }
}

void bubbleSort(int *arr, int arrSize) {
    int i, j;

    for (i = 0; i < arrSize - 1; i++) {
        for (j = 0; j < arrSize - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}