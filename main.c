#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "funkcjePomocnicze.h"
#include "algorytmyGrupa1.h"
#include "algorytmyGrupa2.h"

int main() {
    clock_t start, end;
    double execTime;
    int arrSize;

    printf("Podaj wielkosc tablicy do posortowania: ");
    scanf("%d", &arrSize);

    int* array;
    array = allocateMemory(arrSize);

    {   // TABLICA LOSOWYCH LICZB
        {   // INSERT SORT
            populateArrayRandom(array, arrSize);
            start = clock();
            insertSort(array, arrSize);
            end = clock();
            execTime = ((double) (end - start)) / CLOCKS_PER_SEC;
            saveResultToFile("./../resultsRand/insertSortRand.txt", array, arrSize, execTime);
        }
        {   // SELECTION SORT
            populateArrayRandom(array, arrSize);
            start = clock();
            selectionSort(array, arrSize);
            end = clock();
            execTime = ((double) (end - start)) / CLOCKS_PER_SEC;
            saveResultToFile("./../resultsRand/selectionSortRand.txt", array, arrSize, execTime);
        }
        {   // BUBBLE SORT
            populateArrayRandom(array, arrSize);
            start = clock();
            bubbleSort(array, arrSize);
            end = clock();
            execTime = ((double) (end - start)) / CLOCKS_PER_SEC;
            saveResultToFile("./../resultsRand/bubbleSortRand.txt", array, arrSize, execTime);
        }
        {   // QUICKSORT
            populateArrayRandom(array, arrSize);
            start = clock();
            quickSort(array, 0, arrSize - 1);
            end = clock();
            execTime = ((double) (end - start)) / CLOCKS_PER_SEC;
            saveResultToFile("./../resultsRand/quickSortRand.txt", array, arrSize, execTime);
        }
        {   // SHELL SORT
            populateArrayRandom(array, arrSize);
            start = clock();
            shellSort(array, arrSize);
            end = clock();
            execTime = ((double) (end - start)) / CLOCKS_PER_SEC;
            saveResultToFile("./../resultsRand/shellSortRand.txt", array, arrSize, execTime);
        }
        {   // HEAP SORT
            populateArrayRandom(array, arrSize);
            start = clock();
            heapSort(array, arrSize);
            end = clock();
            execTime = ((double) (end - start)) / CLOCKS_PER_SEC;
            saveResultToFile("./../resultsRand/heapSortRand.txt", array, arrSize, execTime);
        }
    }
        
    {   // TABLICA ROSNACYCH LICZB
        {   // INSERT SORT
            populateArrayAscending(array, arrSize);
            start = clock();
            insertSort(array, arrSize);
            end = clock();
            execTime = ((double) (end - start)) / CLOCKS_PER_SEC;
            saveResultToFile("./../resultsAsc/insertSortAsc.txt", array, arrSize, execTime);
        }
        {   // SELECTION SORT
            populateArrayAscending(array, arrSize);
            start = clock();
            selectionSort(array, arrSize);
            end = clock();
            execTime = ((double) (end - start)) / CLOCKS_PER_SEC;
            saveResultToFile("./../resultsAsc/selectionSortAsc.txt", array, arrSize, execTime);
        }
        {   // BUBBLE SORT
            populateArrayAscending(array, arrSize);
            start = clock();
            bubbleSort(array, arrSize);
            end = clock();
            execTime = ((double) (end - start)) / CLOCKS_PER_SEC;
            saveResultToFile("./../resultsAsc/bubbleSortAsc.txt", array, arrSize, execTime);
        }
        {   // QUICKSORT
            populateArrayAscending(array, arrSize);
            start = clock();
            quickSort(array, 0, arrSize - 1);
            end = clock();
            execTime = ((double) (end - start)) / CLOCKS_PER_SEC;
            saveResultToFile("./../resultsAsc/quickSortAsc.txt", array, arrSize, execTime);
        }
        {   // SHELL SORT
            populateArrayAscending(array, arrSize);
            start = clock();
            shellSort(array, arrSize);
            end = clock();
            execTime = ((double) (end - start)) / CLOCKS_PER_SEC;
            saveResultToFile("./../resultsAsc/shellSortAsc.txt", array, arrSize, execTime);
        }
        {   // HEAP SORT
            populateArrayAscending(array, arrSize);
            start = clock();
            heapSort(array, arrSize);
            end = clock();
            execTime = ((double) (end - start)) / CLOCKS_PER_SEC;
            saveResultToFile("./../resultsAsc/heapSortAsc.txt", array, arrSize, execTime);
        }
    }

    {   // TABLICA MALEJACYCH LICZB
        {   // INSERT SORT
            populateArrayDescending(array, arrSize);
            start = clock();
            insertSort(array, arrSize);
            end = clock();
            execTime = ((double) (end - start)) / CLOCKS_PER_SEC;
            saveResultToFile("./../resultsDesc/insertSortDesc.txt", array, arrSize, execTime);
        }
        {   // SELECTION SORT
            populateArrayDescending(array, arrSize);
            start = clock();
            selectionSort(array, arrSize);
            end = clock();
            execTime = ((double) (end - start)) / CLOCKS_PER_SEC;
            saveResultToFile("./../resultsDesc/selectionSortDesc.txt", array, arrSize, execTime);
        }
        {   // BUBBLE SORT
            populateArrayDescending(array, arrSize);
            start = clock();
            bubbleSort(array, arrSize);
            end = clock();
            execTime = ((double) (end - start)) / CLOCKS_PER_SEC;
            saveResultToFile("./../resultsDesc/bubbleSortDesc.txt", array, arrSize, execTime);
        }
        {   // QUICKSORT
            populateArrayDescending(array, arrSize);
            start = clock();
            quickSort(array, 0, arrSize - 1);
            end = clock();
            execTime = ((double) (end - start)) / CLOCKS_PER_SEC;
            saveResultToFile("./../resultsDesc/quickSortDesc.txt", array, arrSize, execTime);
        }
        {   // SHELL SORT
            populateArrayDescending(array, arrSize);
            start = clock();
            shellSort(array, arrSize);
            end = clock();
            execTime = ((double) (end - start)) / CLOCKS_PER_SEC;
            saveResultToFile("./../resultsDesc/shellSortDesc.txt", array, arrSize, execTime);
        }
        {   // HEAP SORT
            populateArrayDescending(array, arrSize);
            start = clock();
            heapSort(array, arrSize);
            end = clock();
            execTime = ((double) (end - start)) / CLOCKS_PER_SEC;
            saveResultToFile("./../resultsDesc/heapSortDesc.txt", array, arrSize, execTime);
        }
    }

    free(array);
    return 0;
}