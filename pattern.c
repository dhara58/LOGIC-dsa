
#include<stdio.h>
int main(){

    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int k=i;k>=1;k--){
            printf("%d",k);
        }
        for(int f=2;f<=i;f++){
            printf("%d",f);
        }
        printf("\n");
    }

    return 0;
}
