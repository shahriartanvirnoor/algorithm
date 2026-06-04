#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct node {
    char data;
    struct node* next;
} newNode;

newNode* top = NULL;
newNode* front = NULL;
newNode* rear = NULL;

void enqueue(char x) {
    newNode* node = (newNode*) malloc(sizeof(newNode));
    if (node == NULL) {
        printf("Overflow\n");
        return;
    }
    node->data = x;
    node->next = NULL;

    if (front == NULL && rear == NULL) {
        front = node;
        rear = node;
    } else {
        rear->next = node;
        rear = node;
    }
}

char dequeue() {
    if (front == NULL) {
        return '\0';
    }
    newNode* temp = front;
    char data = front->data;
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    }
    free(temp);
    return data;
}

void push(char data) {
    newNode* node = (newNode*) malloc(sizeof(newNode));
    if (node == NULL) {
        printf("New node hasn't created!\n");
    } else {
        node->data = data;
        node->next = top;
        top = node;
    }
}

char pop() {
    if (top == NULL) {
        return '\0';
    }
    newNode* temp = top;
    char data = top->data;
    top = top->next;
    free(temp);
    return data;
}

void check(char x[]) {
    for (int i = 0; x[i] != '\0'; i++) {
        if (isalpha((unsigned char)x[i])) {
            enqueue(x[i]);
            push(x[i]);
        }
    }
}

void palindrome() {
    if (front == NULL && top == NULL) {
        printf("Palindrome!\n");
        return;
    }

    char p = pop();
    char d = dequeue();

    if (tolower((unsigned char)p) == tolower((unsigned char)d)) {
        palindrome();
    } else {
        printf("This text is not a palindrome\n");
    }
}

int main() {
    char string[100];
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    
    string[strcspn(string, "\n")] = '\0';

    check(string);

    if (front == NULL) {
        printf("No alphabetic characters entered.\n");
    } else {
        palindrome();
    }

    return 0;
}
