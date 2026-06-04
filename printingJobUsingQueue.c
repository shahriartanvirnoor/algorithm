#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int front = -1;
int rear = -1;
int MAXSIZE = 5;
char queue[5][20];
bool ON = true;

void enqueue(char x[]);
void dequeue();
void display();
void menu();

int main()
{
    char x[20];
    int choice;
    while(ON)
    {
        menu();
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            printf("Job name: ");
            scanf("%s", x);
            enqueue(x);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            ON = false;
            break;

        default :
            printf("Wrong operation!\n");
        }
        choice = 0;



    }
    printf("Task completed!\n");

    return 0;
}

void enqueue(char x[])
{
    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        strcpy(queue[rear],x);
    }
    else if((rear + 1) % MAXSIZE == front)
    {
        printf("Overflow\n");
        printf("Space full\n");
    }
    else
    {
        rear = (rear + 1) % MAXSIZE;

        strcpy(queue[rear],x);
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("No task available\n");
        //printf("Nothing can be deleted\n");
    }
    else if(front == rear)
    {
        printf("Print done:%s\n",queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("Print done : %s\n", queue[front]);
        front = (front + 1) % MAXSIZE;
    }
}
void menu()
{
    printf("--MENU--\n");
    printf("1. Add print job\n");
    printf("2. Print\n");
    printf("3. Display queue status\n");
    printf("4. Shut down\n");

}

void display()
{
   if(front == -1 && rear == -1){
    printf("No task available\n");
   }
    else
    {
        int i = front;
        while(i != rear)
        {
            printf("%s -> ", queue[i]);
            i = (i + 1) % MAXSIZE;
        }
        printf("%s\n", queue[rear]);
    }
}
