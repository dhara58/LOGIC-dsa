#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* prev;
    struct node* next;
};

struct node* head = NULL;

void insert_first(int val)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = val;
    temp->prev = NULL;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
        temp->next = temp;
        temp->prev = temp;
    }
    else
    {
        struct node* ptr = head;
        while(ptr->next!= head)
        {
            ptr = ptr->next;
        }
        temp->next = head;
        temp->prev = ptr;
        ptr->next = temp;
        head->prev = temp;
        head = temp;
    }
}

void insert_end(int val)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = val;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
        temp->next = temp;
        temp->prev = temp;
    }
    else
    {
        struct node* ptr = head;
        while(ptr->next!= head)
        {
            ptr = ptr->next;
        }
        temp->next = head;
        temp->prev = ptr;
        ptr->next = temp;
        head->prev = temp;
    }
}

void display()
{
    struct node* ptr = head;
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }while(ptr != head);
    printf("\n");
}

int main()
{
    insert_end(5);
    insert_first(4);
    insert_end(7);
    insert_end(8);
    display();
    return 0;
}