#include <stdio.h>

void getdata(int arr[]){
    for(int i=0;i<5;i++){
    printf("enter the element of array :");
    scanf("%d",&arr[i]);
    }
    
}
void add(int arr[], int size, int capacity, int element, int index) {
    printf("enter the element which you want to add :");
    scanf("%d",&element);

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
    int arr[100]; 
    int capacity = 100;
    int size = 5;
    int element;
    int index=2;

    getdata(arr);
    add(arr, size, capacity, element, index);
    printArray(arr, size);

    return 0;
}