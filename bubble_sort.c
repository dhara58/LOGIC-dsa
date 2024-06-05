#include<stdio.h>
int temp;

void sort_and_print(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0; i<n; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    
    printf("enter the array size :");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
    printf("enter the element :");
    scanf("%d",&arr[i]);
    }

    sort_and_print(arr,n);
}