#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void traversing(struct node* head) {
    struct node* temp = head;
    while(temp!= NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}

int main() {

    struct node* head = NULL;
    struct node* ptr = head;
    struct node* n1 = (struct node*) malloc(sizeof(struct node));
    struct node* n2 = (struct node*) malloc (sizeof(struct node));
    struct node* n3 = (struct node*) malloc(sizeof(struct node));
    struct node* n4 = (struct node*) malloc(sizeof(struct node));
    struct node* n5 = (struct node*) malloc(sizeof(struct node));
    struct node* n6 = (struct node*) malloc(sizeof(struct node));
    struct node* n7 = (struct node*) malloc(sizeof(struct node));

    printf("%d\n", *n1);// Why is it containing garbage value?

    head = n1;
    printf("Enter first element: ");
    scanf("%d", &n1->data);
    n1->next = NULL;

    printf("Enter second element: ");
    scanf("%d", &n2->data);
    n2->next = NULL;
    n1->next = n2;

    printf("Enter third element: ");
    scanf("%d", &n3->data);
    n3->next = NULL;
    n2->next = n3;

    printf("Enter fourth element: ");
    scanf("%d", &n4->data);
    n4->next = NULL;
    n3->next = n4;

    printf("Enter fifth element: ");
    scanf("%d", &n5->data);
    n5->next = NULL;
    n4->next = n5;

    printf("Enter sixth element: ");
    scanf("%d", &n6->data);
    n6->next = NULL;
    n5->next = n6;

    printf("Enter seventh element: ");
    scanf("%d", &n7->data);
    n7->next = NULL;
    n6->next = n7;



    printf("\nThe input has taken.\n");
    printf("--------------------------------------------------------------\n");

    traversing(head);




    return 0;
}
