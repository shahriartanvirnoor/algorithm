#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;

};

struct node* head = NULL;
struct node* temp = NULL;
struct node* ptr = NULL;

void insertAtend(int data)
{
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    if(head==NULL)
    {
        newNode->data= data;
        newNode->next = NULL;
        newNode->prev = NULL;
        head = newNode;
        temp= newNode;
    }
    else
    {
        newNode->data = data;
        newNode->prev = temp;
        temp->next=newNode;
        newNode->next = NULL;
        temp= newNode;
    }

}

void displayforward()
{
    ptr = head;
    while(ptr!=NULL){
        printf("%d <--> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void displaybackward()
{
    ptr = temp;
    while(ptr!=NULL)
    {
        printf("%d <--> ", ptr->data);
        ptr = ptr->prev;

    }
    printf("NULL\n");
}

int main()
{
    insertAtend(34);
    insertAtend(103);
    insertAtend(20);
    insertAtend(23);
    insertAtend(35);
    insertAtend(30);
    insertAtend(89);
    insertAtend(65);

    printf("MENU\n-------------------------------------------\n");
    printf("Choose your option:\n1. Displayforward\n2. DisplayReverse\n:: ");
    int choice;
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        displayforward();
        break;
    case 2:
        displaybackward();
        break;
    default:
        printf("Wrong choice\n");

    }



    return 0;
}
