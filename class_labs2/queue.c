#include <stdlib.h>
#include <stdio.h>

#define SIZE 50
void enQueue(char);
void deQueue();
void display();
char items[SIZE];
char* front = &items[0] - 1;
char* rear = &items[0] - 1;
int main()
{
    //deQueue is not possible on empty queue
    deQueue();
    
    //enQueue 5 elements
    enQueue('s');
    enQueue('o');
    enQueue('n');
    enQueue('g');
    enQueue('\n');
    
    //6th element can't be added to queue because queue is full
    enQueue('t');
    enQueue('e');
    enQueue('s');
    enQueue('t');
    enQueue('\n');
    enQueue('g');
    enQueue('o');

    display();
    
    //deQueue removes element entered first i.e. 1
    deQueue();
    
    //Now we have just 4 elements
    display();
    
    return 0;
    
}
void enQueue(char value){
    if(rear == front + 49)
        printf("\nQueue is Full!!");
    else {
        if(front == items - 1)
            front = items;
        rear += 1;
        *rear = value;
        printf("\nInserted -> %c", value);
    }
}
void deQueue(){
    if(front == rear)
        printf("\nQueue is Empty!!");
    else{
        printf("\nDeleted : %c", *front);
        front += 1;
        if(front > rear)
            front = rear = items - 1;
    }
}
void display(){
    if(rear == front)
        printf("\nQueue is Empty!!!");
    else{
        printf("\nQueue elements are:\n");
        for(char * i = front; i <= rear; i += 1)
            printf("\t%c", *i);
    }
}