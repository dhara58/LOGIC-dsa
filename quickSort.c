#include<stdio.h>

int  partition(int a[],int lb, int ub){
    int pivot = a[lb];
    int start = lb;
    int end = ub;
    int  temp;

    while (start < end){
        while(a[start] <= pivot){
            start++;
        }
        while(a[end] > pivot){
            end--;
        }
        if(start < end){
            temp = a[start];
            a[start] =  a[end];
            a[end] = temp;
        }
    }
    temp = a[lb];
    a[lb] = a[end];
    a[end] = temp;
    return  end;

}

void quick_sort(int a[],int lb,int ub){
    if(lb < ub){
        int loc =  partition(a,lb,ub);
        quick_sort(a,lb,loc-1);
        quick_sort(a,loc+1,ub);

    }
}
int  main(){
    int a[5]={6,8,3,2,9};
    int lb=0;
    int  ub=4;
    quick_sort(a,lb,ub);

    for(int i=0;i<5;i++){
        printf("%d\t",a[i]);
    }
    
    return 0;
}