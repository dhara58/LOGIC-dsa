#include<stdio.h>
int front = -1;
int rear = -1;

void insert_data(int n,int element,int queue[]){
    if(front == -1 && rear == -1){
        front = rear = 0;
        queue[rear]=element;
    }
    else if(((rear + 1)%n)==front){
        printf("queue is full ");
    }
    else{
        rear = (rear + 1)%n;
        queue[rear] = element;
    }
} 

void delete_data(int queue[],int n){
    if(front == -1 && rear == -1){
        printf("queue is empty");
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        printf("%d\t",queue[front]);
        front=(front + 1)%n;
    }
}

void display_data(int n,int queue[]){
    int i = front;
    if(front == -1 && rear == -1){
        printf("queue is empty");
    }
    else {
        while(i != rear){
            printf("%d\t",queue[i]);
            i = (i+1)%n;
        }
        printf("%d",queue[rear]);
        printf("\n");
    }
}

int main(){
    int n=5;
    int queue[n];

    insert_data(n,10, queue);
    insert_data(n,20, queue);
    insert_data(n,30, queue);
    insert_data(n,40, queue);
    insert_data(n,50, queue);

    display_data(n,queue);

    printf("deleted data is :");
    delete_data(queue,n);
    delete_data(queue,n);

    printf("\nafter deletion the data is :");
    display_data(n,queue);
    printf("new data added is :");
    insert_data(n,23,queue);
    display_data(n,queue);

return 0;
    }