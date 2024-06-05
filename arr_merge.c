#include<stdio.h>
void fun(int arr1[],int arr2[],int arr3[]){
    
    int k=0;
    for(int i=0;i<3;i++,k++){
        arr3[i]=arr1[i];
    }
    for(int j=0;j<3;j++,k++){
        arr3[k]=arr2[j];  
    }
    for(int a=0;a<6;a++){
        printf("%d ",arr3[a]);
    }
}
 int main(){
    int arr1[3]={1,2,3};
    int arr2[3]={4,5,6};
     int arr3[6];

    fun(arr1,arr2,arr3);   
return 0;
}