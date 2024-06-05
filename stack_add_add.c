#include<stdio.h>

int top = -1;

void add(int arr[], int n, int element) {
    if(top >= n-1){
        printf("Stack is full\n");
    }
    else{
        top++;
        arr[top] = element;
    }
}

void display(int arr[]) {
    if(top < 0){
        printf("Stack is empty\n");
    }
    else{
        for(int i=top; i>=0; i--){
            printf(" %d ", arr[i]);
        }
        printf("\n");
    }
}

void delete(int arr[], int n, int index) {
    if(top < 0){
        printf("Stack is empty\n");
    }
    else if(index < 0 || index > top){
        printf("Invalid index\n");
    }
    else{
        for(int i=index; i<top; i++){
            arr[i] = arr[i+1];
        }
        top--;
    }
}

int main(){
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int arr[n];
    int element;
    int user;
    
    do{
        printf("1. For insert the data\n");
        printf("2. For display the data\n");
        printf("3. For remove the data\n");
        printf("0. For exit\n");
        printf("Enter your choice: ");
        scanf("%d",&user);

        if(user==1){
            printf("Enter the element: ");
            scanf("%d",&element);
            add(arr,n,element);
        }
        else if(user==2){
            display(arr);
        }
        else if(user==3){
            printf("Enter the index of the element to delete: ");
            scanf("%d",&element);
            delete(arr,n,element);
            display(arr);
        }
    } while(user!=0);

    return 0;
}