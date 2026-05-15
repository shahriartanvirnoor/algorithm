#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;

};

struct node* head = NULL;
struct node* trial = NULL;

int main()
{

    struct node* l1 = (struct node*)malloc (sizeof(struct node));
    head = l1;
    l1->data = 1;
    l1->next = l1->prev = NULL;

    struct node* l2 = (struct node*)malloc (sizeof(struct node));
    l2->data = 2;
    l2->prev = l1;
    l2->next = NULL;
    l1->next = l2;

    struct node* l3 = (struct node*)malloc (sizeof(struct node));
    l3->data = 3;
    l3->prev = l2;
    l3->next = NULL;
    l2->next = l3;

    struct node* l4 = (struct node*)malloc (sizeof(struct node));
    l4->data = 4;
    l4->prev = l3;
    l4->next = NULL;
    l3->next = l4;

    struct node* l5 = (struct node*)malloc (sizeof(struct node));
    l5->data = 5;
    l5->prev = l4;
    l5->next = NULL;
    l4->next = l5;

    struct node* temp = head;
    while(temp != NULL)
    {
        printf("%d <==> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");




    return 0;
}
