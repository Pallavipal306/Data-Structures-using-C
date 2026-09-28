#include <stdio.h>
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {12, 34, 6, 40, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 40; 
    int index = linearSearch(arr, size, target);
    if (index != -1) {
        printf("Element %d found at index: %d\n", target, index);
        printf("Position in array: %d\n", index + 1); 
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    return 0;
}
