#include <stdio.h>
#include <stdbool.h>
void bubbleSort(int arr[], int n) {
    int temp;
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true; 
            }
        }
        if (!swapped) {
            break;
        }
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data) / sizeof(data[0]);
    printf("Original array: \n");
    printArray(data, n);
    bubbleSort(data, n);
    printf("Sorted array in ascending order: \n");
    printArray(data, n);

    return 0;
}
