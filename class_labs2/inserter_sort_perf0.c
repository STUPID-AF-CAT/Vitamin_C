//macro to find how many elements in array, stands for Better Size Of
#define BSO(n) (sizeof(n)/sizeof(n[0]))
//macro that uses BSO to print all elemenets in array, stands for Array Printf
#define APRINTF(arr, n) for (int i = 0; i < n; i++) {printf(" %d", arr[i]);}

#include <stdlib.h>
#include <stdio.h>

//function that more accurately takes user input, name is acronym for Better Scanf
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

/* Function to sort an array using insertion sort*/
int insertionSort(int arr[], int n) 
{ 
    int count = 0;
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        count++;
        j = i - 1; 
  
        /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
            count++;
        } 
        arr[j + 1] = key;
        count++; 
    } 
    return count;
} 

int main()
{
    printf("Enter the number of elements in the array: ");
    int nelems;
    do
    {
        nelems = BS();
        if (nelems > 0)
        {
            break;
        }
        else
        {
            printf("\nLet's try that again, enter the number of elements in the array: ");
        }
        
    } while(1);
    printf("\nCreating an array with %d elements...\n", nelems);
    /*
    int *arr;
    arr = (int*) calloc(nelems, sizeof(int));
    
    for (int i = 0; i < nelems; i++)
    {
        arr[i] = BS();
    }
    */
    int arr[] = {89, 72, 3, 15, 21, 57, 61, 44, 19, 98, 5, 77, 39, 59, 61};
    APRINTF(arr, nelems);
    putchar('\n');

    int result = insertionSort(arr, nelems);

    APRINTF(arr, nelems);
    printf("\n%d\n", result);

    return 0;
}