#include <stdio.h>

void bubbleSort(int arr[], int n, int swaps[]) {
    int i, j, temp;
    int totalSwaps = 0;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps[arr[j]]++;
                swaps[arr[j+1]]++;
                totalSwaps++;
                printf("Bubble Sort: Swapped %d and %d\n", arr[j], arr[j+1]);
            }
        }
    }
    printf("Bubble Sort: Total number of swaps: %d\n", totalSwaps);
}

void selectionSort(int arr[], int n, int swaps[]) {
    int i, j, min_idx, temp;
    int totalSwaps = 0;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
        swaps[arr[min_idx]]++;
        swaps[arr[i]]++;
        totalSwaps++;
        printf("Selection Sort: Swapped %d and %d\n", arr[min_idx], arr[i]);
    }
    printf("Selection Sort: Total number of swaps: %d\n", totalSwaps);
}

int main() {
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    
    int bubbleSwaps1[100] = {0}; // Assuming the maximum value in the array is 99
    int bubbleSwaps2[100] = {0}; // Assuming the maximum value in the array is 99
    int selectionSwaps1[100] = {0}; // Assuming the maximum value in the array is 99
    int selectionSwaps2[100] = {0}; // Assuming the maximum value in the array is 99
    
    printf("Array 1 Bubble Sort:\n");
    bubbleSort(array1, size1, bubbleSwaps1);
    printf("\nArray 1 Selection Sort:\n");
    selectionSort(array1, size1, selectionSwaps1);
    
    printf("\nArray 2 Bubble Sort:\n");
    bubbleSort(array2, size2, bubbleSwaps2);
    printf("\nArray 2 Selection Sort:\n");
    selectionSort(array2, size2, selectionSwaps2);

    return 0;
}
