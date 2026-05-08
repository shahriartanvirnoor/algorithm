#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void traversing(struct node* head) {
    struct node* temp = head;
    while(temp!= NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}

struct node* search(struct node* head, int data){
    struct node* temp = head;
    while(temp!=NULL) {
        if(temp->data == data) {

        return temp;
        break;
        }
        temp = temp->next;
    }
    return NULL;
}
void insertnode(struct node* prevnode, int newData) {
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = newData;

    newnode->next = prevnode->next;
    prevnode->next = newnode;
}

int main()
{

    struct node *head = NULL;
    struct node *st1 = (struct node*) malloc(sizeof(struct node));


    st1->data = 78;
    st1->next = NULL;
    head = st1;

    struct node *st2 = (struct node*) malloc(sizeof(struct node));
    st2->data= 34;
    st2->next=NULL;
    st1->next= st2;

    struct node *st3 = (struct node*)malloc(sizeof(struct node));
    st3->data = 59;
    st3->next = NULL;
    st2->next = st3;

    struct node *st4 = (struct node*)malloc(sizeof(struct node));
    st4->data = 45;
    st4->next = NULL;
    st3->next= st4;

    struct node *st5 = (struct node*)malloc(sizeof(struct node));
    st5->data= 58;
    st5->next= NULL;
    st4->next = st5;

    struct node *st6 = (struct node*)malloc(sizeof(struct node));
    st6->data= 74;
    st6->next= NULL;
    st5->next = st6;

    struct node *st7 = (struct node*)malloc(sizeof(struct node));
    st7->data= 64;
    st7->next= NULL;
    st6->next = st7;

    struct node *st8 = (struct node*)malloc(sizeof(struct node));
    st8->data= 98;
    st8->next= NULL;
    st7->next = st8;

    struct node *st9 = (struct node*)malloc(sizeof(struct node));
    st9->data= 33;
    st9->next= NULL;
    st8->next = st9;

    struct node *st10 = (struct node*)malloc(sizeof(struct node));
    st10->data= 95;
    st10->next= NULL;
    st9->next = st10;

    struct node *st11 = (struct node*)malloc(sizeof(struct node));
    st11->data= 87;
    st11->next= NULL;
    st10->next = st11;

    printf("--------------------------------------------------------------\n");

    traversing(head);
    printf("\n");
    int data=0;
    printf("Enter an element that you want to look for: \n");
    scanf("%d", &data);
    struct node* prevnode = search(head, data);
    int x;
    printf("Enter a number that will be added to the list: ");
    scanf("%d", &x);

    insertnode(prevnode, x);
     printf("After adding an element to the node.n");
     printf("-----------------------------------------------------------------\n");
     traversing(head);
    return 0;
}
