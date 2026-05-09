#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* top = NULL;

void push(int data) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    if(newNode==NULL)
    printf("New node hasn't created!\n");
    else {
        newNode -> data = data;
        newNode-> next = top;
        top = newNode;
    }

}

int pop() {
    if(top== NULL) {
        printf("Stack is empty!\n");
       
    }
    else {
        struct node* temp = top;
        int poppedValue = top -> data;
        top = top->next;
        free(temp);
        return poppedValue;

    }
}

int main() {
    push(45);
    push(43);
    push(78);
    push(23);
    push(75);

    printf("Now let's see what's there in the stack!!!!\n");
    int value1= pop();
    printf("first value : %d \n", value1);
    int value2 = pop();
    printf("second value : %d \n", value2);
    int value3 = pop();
    printf("third value : %d \n", value3);
    int value4 = pop();
    printf("fourth value :  %d \n", value4);
    int value5 = pop();
    printf("fifth value : %d \n", value5);
    int value6 = pop();
    printf("sixth value : %d \n", value6);



    return 0;

}
