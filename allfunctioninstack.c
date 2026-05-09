#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};



struct node* top = NULL;

void peek() {
    if(top == NULL) {
    printf("Stack is empty\n");
    }
    else {
        printf("peeked value : %d\n", top->data);
    }
}

void push(int data) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    if(newNode==NULL){
    printf("New node hasn't created!\n");
    }
    else {
        newNode -> data = data;
        newNode-> next = top;
        top = newNode;
    }

}
int isEmpty() {
    return top==NULL;
    
}

void display() {
   
        struct node* temp = top;
        if(top==NULL){
            printf("Stack is empty!\n");
        }
        
        while(temp!=NULL){
          int x = temp->data;
          temp = temp ->next;
          printf("%d -> ", x);}
        
}

void pop() {
    if(top== NULL) {
        printf("Stack is empty!\n");
      
       
    }
    else {
        struct node* temp = top;
        int poppedValue = top -> data;
        top = top->next;
        free(temp);
        

    }
}

int main() {
    push(45);
    push(43);
    push(78);
    push(23);
    push(75);

    peek();
    printf("Stack elements: \n");

    display();
    printf("\n");
    printf("Pop a value.\n");
    pop();
    
    printf("Now Stack elemnets: \n");
    display();
    printf("\n");

  return 0;
}
