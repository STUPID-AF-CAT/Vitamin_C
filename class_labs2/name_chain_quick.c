#include <stdio.h> 
#include <stdlib.h> 
#include <ctype.h>

struct Node 
{ 
    char *data; 
    struct Node *next; 
    struct Node *prev; 
}; 
  

void swap ( char** a, char** b ) 
{ char * t = *a; *a = *b; *b = t; } 
  

struct Node *lastNode(struct Node *root) 
{ 
    while (root && root->next) 
        root = root->next; 
    return root; 
} 

struct Node* partition(struct Node *l, struct Node *h) 
{  
    char * x = h->data; 
   
    struct Node *i = l->prev; 
  
    for (struct Node *j = l; j != h; j = j->next) 
    { 
        if (*j->data <= *x) 
        { 
            i = (i == NULL) ? l : i->next; 
  
            swap(&(i->data), &(j->data)); 
        } 
    } 
    i = (i == NULL) ? l : i->next;
    swap(&(i->data), &(h->data)); 
    return i; 
} 

void _quickSort(struct Node* l, struct Node *h) 
{ 
    if (h != NULL && l != h && l != h->next) 
    { 
        struct Node *p = partition(l, h); 
        _quickSort(l, p->prev); 
        _quickSort(p->next, h); 
    } 
} 

void quickSort(struct Node *head) 
{ 
    struct Node *h = lastNode(head); 
  
    _quickSort(head, h); 
} 
  
void printList(struct Node *head) 
{ 
    while (head) 
    { 
        printf("%s ", head->data); 
        head = head->next; 
    } 
    printf("\n"); 
} 

void push(struct Node** head_ref, char * new_data) 
{ 
    struct Node* new_node = (struct Node*)  
               malloc(sizeof(struct Node));
    new_node->data = new_data; 

    new_node->prev = NULL; 

    new_node->next = (*head_ref); 

    if ((*head_ref) != NULL) (*head_ref)->prev = new_node ; 

    (*head_ref) = new_node; 
} 

int BS()
{
    char buf[100];
    if (buf == fgets(buf, 99, stdin))
        {
            int ret, num;

            ret = sscanf(buf, "%d", &num);
            if (ret == 1)
            {
                return num;
            }
            else
            {
                printf("\nAre you serious right now?\n");
                return -1;
            }
            
        }
}

int main(int argc, char **argv) 
{ 
    struct Node *a = NULL; 
    push(&a, "Jeff Goldbloom"); 
    push(&a, "Ron Swanson"); 
    push(&a, "Anonymous"); 
    push(&a, "The Hacker known as 4chan"); 
    push(&a, "Yu-Gi-Oh"); 
  
    printf("Linked List before sorting \n"); 
    printList(a); 
  
    quickSort(a); 
  
    printf("Linked List after sorting \n"); 
    printList(a); 
  
    return 0; 
} 