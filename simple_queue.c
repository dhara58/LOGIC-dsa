#include<stdio.h>

int rear=-1;
int front=-1;

void add(int n,int element,int queue[]){
    if(rear == n-1){
        printf("your queue is full\n");
    }
    else if(rear==-1 && front == -1){
        rear=front=0;
        queue[rear] = element;
    }
    else{
        rear++;
        queue[rear] = element;
    }
}

void remove_data(int queue[]){
    if(front == -1 && rear == -1){
        printf("queue is empty");
    }
    else if(front == rear){
        front = rear = -1;
    }
    else {
        printf("removed element %d\n",queue[front]);
        front++;
    }
}
void display (int queue[]){
    if(rear == -1 && front == -1){
        printf("data not found");
    }
    else {
        for(int i = front; i < rear + 1; i++){
            printf("%d\t",queue[i]);
        }
        printf("\n");
    }
}
int main(){
    
    int n=5;
    int queue[n];
   

    add(n,10,queue);
    add(n,20,queue);
    add(n,30,queue);
    add(n,40,queue);
    add(n,50,queue);
    add(n,50,queue);
    

    display(queue);
    remove_data(queue);
    display(queue);
    remove_data(queue);
    display(queue);
    return 0;
}
