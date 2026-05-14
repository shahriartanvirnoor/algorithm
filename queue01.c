#include <stdio.h>
int front = -1;
int rear = -1;
int MAXSIZE = 10;
int queue[10];

void enqueue(int x);
void dequeue();
void display();

int main() {
    enqueue(5);
    enqueue(49);
    enqueue(43);
    enqueue(65);
    enqueue(1);
    enqueue(98);
    enqueue(3);
    enqueue(9);
    enqueue(-6);

    display();

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    enqueue(12);
    enqueue(73);
    enqueue(6);
    enqueue(9);

    display();





return 0;
}

void enqueue(int x) {
    if(front==-1 && rear==-1) {
        front = rear = 0;
        queue[front] = x;
    } else if(rear ==MAXSIZE-1) {
        printf("Overflow\n");
        printf("Element %d can't be store in the queue\n", x);

    }
    else {
        rear +=1;
        queue[rear] = x;
    }
}
void dequeue() {
    if(front==-1 && rear ==-1) {
        printf("Undeflow\n");
    }
    else if(rear == front) {
    printf("dequing element :%d\n", queue[front]);
    rear = front = -1;
    }
    else {
        printf("dequeing element : %d\n",queue[front]);
        front++;
    }
}
void display() {
    if(front ==-1 && rear == -1) {
        printf("Queue is empty\n");
    }
    else {
    for(int i=front; i<=rear; i++) {
        printf("%d -> ",queue[i]);
    }
    printf("\n");
    }
}
