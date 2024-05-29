#include "funkcjePomocnicze.h"

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int *arr, int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);

    return (i + 1);
}

void heapify(int *arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);

        heapify(arr, n, largest);
    }
}

int* allocateMemory(int arrSize) {
    int *arr = (int*)malloc(arrSize * sizeof(int));
    if (arr == NULL) {
        printf("Blad dynamicznej alokacji pamieci\n");
        exit(1);
        return NULL;
    }

    return arr;
}

void printArray(int *arr, int arrSize) {
    for (int i = 0; i < (int)arrSize; i++) {
        printf("%d\n", arr[i]);
    }
}

void saveResultToFile(const char *filepath, int *arr, int arrSize, double time) {
    FILE *file = fopen(filepath, "w");
    if (file == NULL) {
        printf("Nie mozna otworzyc pliku do zapisu danych\n");
        exit(2);
    }

    fprintf(file, "Czas wykonania: %f\n\nTablica po sortowaniu:\n", time);
    for (int i = 0; i < arrSize; i++) {
        fprintf(file, "%d\n", arr[i]);
    }

    fclose(file);
}

int compareAscending(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int compareDescending(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

void populateArrayRandom(int *arr, int arrSize) {
    srand(time(0));

    for (int i = 0; i < arrSize; i ++) {
        arr[i] = (rand() % 201) - 100;
    }
}

void populateArrayAscending(int *arr, int arrSize) {
    srand(time(0));

    for (int i = 0; i < arrSize; i ++) {
        arr[i] = (rand() % 201) - 100;
    }

    qsort(arr, arrSize, sizeof(int), compareAscending);
}

void populateArrayDescending(int *arr, int arrSize) {
    srand(time(0));

    for (int i = 0; i < arrSize; i ++) {
        arr[i] = (rand() % 201) - 100;
    }

    qsort(arr, arrSize, sizeof(int), compareDescending);
}
