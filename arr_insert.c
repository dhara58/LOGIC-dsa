#include <stdio.h>

void add(int arr[], int size, int capacity, int element, int index) {
    if (size >= capacity) {
        printf("Array size cannot be defined");
    } else {
        for (int i = size - 1; i >= index; i--) {
            arr[i + 1] = arr[i]; 
        }
        arr[index] = element;
        size+=1;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100] = {1, 2, 3, 4, 6}; 
    int capacity = 100;
    int size = 5;
    int element = 5;
    int index = 4;

    add(arr, size, capacity, element, index);
    printArray(arr, size);

    return 0;
}