
#include <stdio.h>

void sort_array(int arr[],int n){
    int temp;
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j < n; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main() {
    
    int n;
    
    int element;
    
    printf("enter the array size :");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0; i<n; i++){
        printf("enter the element :");
        scanf("%d",&arr[i]);
    }
        
     display(arr,n);
    sort_array(arr,n);
     display(arr,n);

   
    return 0;
}