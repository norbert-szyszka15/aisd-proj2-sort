#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void swap(int *x, int *y);

int partition(int *arr, int low, int high);

void heapify(int *arr, int n, int i);

int* allocateMemory(int arrSize);

void printArray(int *arr, int arrSize);

void saveResultToFile(const char *filepath, int *arr, int arrSize, double time);

int compareAscending(const void *a, const void *b);

int compareDescending(const void *a, const void *b);

void populateArrayRandom(int *arr, int arrSize);

void populateArrayAscending(int *arr, int arrSize);

void populateArrayDescending(int *arr, int arrSize);