#include<stdio.h>


struct Node{
    int data;
    char ch;
    struct Node *ptr;
};
int  main(){
struct Node obj1,obj2,obj3;

obj1.data=65;
obj1.ch='A';
obj1.ptr=&obj2;

obj2.data=66;
obj2.ch='B';
obj2.ptr=&obj3;

obj3.data=67;
obj3.ch='C';
obj3.ptr=NULL;

printf("%d %c\n", obj1.ptr->data, obj1.ptr->ch); 
printf("%d %c\n", obj2.ptr->data, obj2.ptr->ch); 
}