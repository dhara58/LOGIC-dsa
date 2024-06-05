#include<stdio.h>
void str(char arr1[],char arr2[],char arr3[]){
   
    int k=0;

    printf("enter string 1 :");
    scanf("%s",arr1);
    printf("enter string 1 :");
    scanf("%s",arr2);
    
    for(int i=0;i<5;i++,k++){
        arr3[i]=arr1[i];
    }
    for(int j=0;j<5;j++,k++){
        arr3[k]=arr2[j];  
    }
    for(int a=0;a<10;a++){
        printf("%c ",arr3[a]);
    }
}
int main(){
    
    char arr1[5];
    char arr2[5];
    char arr3[10];
  
    str(arr1,arr2,arr3);
return 0;
}