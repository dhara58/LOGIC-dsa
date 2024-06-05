#include<stdio.h>
void printdata(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("enter the array number ");
        scanf("%d",&arr[i]);
    }
    printf("\n");
}
void delete(int arr[], int size, int index){
    printf("enter the index which you want to delete :");
    scanf("%d",&index);
        for (int i = index; i < size; i++) {
            arr[i]= arr[i + 1] ; 
        }
        // arr[index]=index;
        size-=1;
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int arr[100]; 
    int size = 5;
    int index =2;
    // int element=

    printdata(arr, size);
    delete(arr, size, index);
    printArray(arr, size);

    return 0;
}