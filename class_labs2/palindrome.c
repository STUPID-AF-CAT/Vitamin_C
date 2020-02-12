#include <stdio.h>

int MAXSIZE = 15;       
char stack[15];     
static int top = -1;            

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

int peek() {
   return stack[top];
}

int pop() {
   int data;
	
   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

int push(char data) {

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}

int main() {
   // push items on to the stack 
   char arr [15] = {"loop"};
   for (int i = 0; i < 14; i++)
   {
       if (arr[i] != 0)
       {
           push(arr[i]);
       }
   }

   printf("Element at top of the stack: %d\n" ,peek());
   printf("Elements: \n");

   // print stack data
   int isPal = 0;
   int i = 0;  
   while(!isempty()) {
      char data = pop();
      if (data == arr[i])
      {
          isPal = 1;
      }
      else
      {
          isPal = 0;
      }
      i++;
      printf("%c\n",data);
   }

   printf("Stack full: %s\n" , isfull()?"true":"false");
   printf("Stack empty: %s\n" , isempty()?"true":"false");
   printf("Word was a palindrome: %s\n", isPal ? "true":"false");
   return 0;
}