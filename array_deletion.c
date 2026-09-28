#include <stdio.h>
int main() {
    int arr[100];
    int size, i, index;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index (0 to %d) of the element to delete: ", size - 1);
    scanf("%d", &index);
    if (index < 0 || index >= size) {
        printf("Invalid index! Deletion is not possible.\n");
        return 1; 
    }
    for (i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("Array after deletion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
