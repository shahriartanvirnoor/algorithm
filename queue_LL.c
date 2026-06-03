#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
}newNode;

newNode*  front = NULL;
newNode*  rear = NULL;

void enqueue (int x);
void display();
void dequeue();
void frontE(){
if(front==NULL){
    printf("Empty\n");
    return;

}
printf("Front : %d\n", front->data);
}
void rearE(){
if(rear==NULL){
printf("Empty\n");
return;
}

printf("Rear : %d\n", rear->data);
}


int main()
 {
     int x = 10;
     enqueue(x);
     enqueue(68);
     enqueue(56);
     display();
     dequeue();
     display();
     frontE();
     rearE();

     return 0;
 }

 void enqueue (int x)
 {
      newNode* node = (newNode*) malloc(sizeof(newNode));
     if(node==NULL){
        printf("Overflow\n");
        return;
     }
     if(front == NULL && rear == NULL)
     {
         front = node;
         node -> data = x;
         rear = node;
         node ->next = NULL;

     }
     node ->data = x;
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
      printf("%d", temp->data);
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
