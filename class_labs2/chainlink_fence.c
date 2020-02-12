#include <stdio.h>
#include <stdlib.h>

typedef struct node {
   int data;
   struct node *prev;
   struct node *next;
} node;

node *head = NULL;
node *last = NULL;

node *current = NULL;

//Create Linked List
void insert(int data) {
   // Allocate memory for new node;
   node *link = (node*) malloc(sizeof(node));

   link->data = data;
   link->prev = NULL;
   link->next = NULL;

   // If head is empty, create new list
   if(head==NULL) {
      head = link;
      return;
   }

   current = head;
   
   // move to the end of the list
   while(current->next!=NULL)
      current = current->next;

   // Insert link at the end of the list
   current->next = link;
   last = link;
   link->prev = current;
}

//display the list
void printList() {
   node *ptr = head;

   printf("\n[head] <=>");

   //start from the beginning
   while(ptr->next != NULL) {        
      printf(" %d <=>",ptr->data);
      ptr = ptr->next;
   }
   
   printf(" %d <=>",ptr->data);
   printf(" [head]\n");
}

int main() {
   insert(10);
   insert(20);
   insert(30);
   insert(1);
   insert(40);
   insert(56); 

   printList();
   return 0;
}
/*
int main()
{
    node *head;
    node *tail;

    node *one = NULL;
    node *two = NULL;
    node *thr = NULL;
    node *fou = NULL;
    node *fiv = NULL;

    one = malloc(sizeof(node));
    two = malloc(sizeof(node));
    thr = malloc(sizeof(node));
    fou = malloc(sizeof(node));
    fiv = malloc(sizeof(node));

    one->data = 42;
    two->data = 56;
    thr.data = 69;

    return 0;
}
*/