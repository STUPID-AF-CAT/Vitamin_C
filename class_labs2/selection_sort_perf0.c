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

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
int selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx, count = 0; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i;
        count++; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
            count++;
  
        // Swap the found minimum element with the first element 
        swap(&arr[min_idx], &arr[i]);
        count++; 
    } 
    return count;
} 

int main()
{
    int arr[] = {89, 72, 3, 15, 21, 57, 61, 44, 19, 98, 5, 77, 39, 59, 61};
    int nelems = BSO(arr);
    APRINTF(arr, nelems);
    putchar('\n');

    int result = selectionSort(arr, nelems);

    APRINTF(arr, nelems);
    printf("\n%d\n", result);

    return 0;
}