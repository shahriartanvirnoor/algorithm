#include <stdio.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;

int isfull(){
    if(top==MAXSIZE -1 )//checking if top has reach at the end or not.
    return 1;
    else return 0;
}

int push(int data)
{
    if(!isfull()){//evry time isfull return 0 this condition is true.
        top = top +1;//increase the top by to create a space to store data
        stack[top] = data;//now assigning the value that has just updated
    }
    else{
        printf("Could not insert data, stack is full.\n");//showing message when the space is not available
    }
}
int main()
{
    int i;
    push(44);//inserting the data by push function
    push(16);
    push(62);
    push(123);
    push(15);
    push(34);
    push(54);
    push(89);
    push(57);
    push(-46);
    push(67);

    printf("Stack Elements: \n");
    for(i =0; i<MAXSIZE; i++){//printing data element to the screen.
        printf("%d ", stack[i]);
        
        
    }
    return 0;
}
