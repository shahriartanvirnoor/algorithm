#include <stdio.h>
int front = -1;
int rear = -1;
int MAXSIZE = 6;
int queue[6];

void enqueue();
void dequeue();
void display();

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(4);
    enqueue(5);
    enqueue(23);
    enqueue(90);
    enqueue(76);
    enqueue(43);
    enqueue(456);
    enqueue(234);

    display();

    dequeue();
    dequeue();
    dequeue();
    dequeue();

    enqueue(56);
    enqueue(25);
    enqueue(88);
    enqueue(99);
    enqueue(45);
    enqueue(100);

    display();

    return 0;
}

void enqueue(int x)
{
    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if((rear + 1) % MAXSIZE == front)
    {
        printf("Overflow\n");
        printf("%d can't be stored in the queue\n", x);
    }
    else
    {
        rear = (rear + 1) % MAXSIZE;
        queue[rear] = x;
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("Underflow\n");
        printf("Nothing can be deleted\n");
    }
    else if(front == rear)
    {
        printf("Poppped element: %d\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("Poppped element: %d\n", queue[front]);
        front = (front + 1) % MAXSIZE;
    }
}

void display()
{
   if(front == -1 && rear == -1){
    printf("Queue is empty\n");
   }
    else
    {
        int i = front;
        while(i != rear)
        {
            printf("%d -> ", queue[i]);
            i = (i + 1) % MAXSIZE;
        }
        printf("%d\n", queue[rear]);
    }
}
