
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 20
typedef struct node {
    char data[20];
    struct node* next;
}newNode;

newNode*  front = NULL;
newNode*  rear = NULL;

void enqueue (char x[]);
void display();
void dequeue();
void frontE(){
if(front==NULL){
    printf("Empty\n");
    return;

}
printf("Front : %s\n", front->data);
}
void rearE(){
if(rear==NULL){
printf("Empty\n");
return;
}

printf("Rear : %s\n", rear->data);
}


int main()
 {
     int choice;
     bool ON= true;
     char nam[MAX];
     

    while(ON){
        printf("---MENU---\n");
     printf("1. Join the queue\n");
     printf("2. Serve\n");
     printf("3. Display the queue\n");
     printf("4. Show the front student\n");
     printf("5. Show the rear student\n");
     printf("6. Exit\n");
     scanf("%d",&choice);
     switch(choice){

 case 1:
    printf("Enter first name: \n");
    scanf("%s", nam);
    enqueue(nam);
    break;

 case 2:
    dequeue();
    break;

 case 3:
    display();
    break;

 case 4:
    frontE();
    break;

 case 5:
    rearE();
    break;

 case 6:
    ON= false;
    break;

 default:
    printf("Wrong choice\n");
           }

}
printf("Thank you.\n");


     return 0;
 }

 void enqueue (char x[])
 {
      newNode* node = (newNode*) malloc(sizeof(newNode));
     if(node==NULL){
        printf("Overflow\n");
        return;
     }
     if(front == NULL && rear == NULL)
     {
         front = node;
         //node -> data = x;
         strcpy(node->data,x);

         rear = node;
         node ->next = NULL;

     }
     strcpy(node->data,x);
     rear ->next = node;
     rear = node;
     node ->next = NULL;


 }

 void display(){
  if(front==NULL){
    printf("No element found\n");
    return;
  }
  newNode* temp = front;
  printf("---------Displaying elemensts---------\n");
  while(temp!=NULL)
  {
      printf("%s", temp->data);
      if(temp->next!=NULL)
        printf(" -> ");
        if(temp->next==NULL)
            printf("\n");
      temp = temp->next;



  }
 }
 void dequeue()
 {
     if(front==NULL){
        printf("Underflow\n");
        return;
     }
    newNode* temp = front;
    front = front->next;
    free(temp);

 }
