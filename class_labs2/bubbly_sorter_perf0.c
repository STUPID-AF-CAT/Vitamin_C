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

int bubbleSort(int arr[], int n)
{

    int i, j, count = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                count++;
            }
            count++;
        }
    }
    return count;
}

int main(void)
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

    int *arr;
    arr = (int*) calloc(nelems, sizeof(int));
    
    for (int i = 0; i < nelems; i++)
    {
        arr[i] = BS();
    }

    APRINTF(arr, nelems);
    putchar('\n');

    int result = bubbleSort(arr, nelems);

    APRINTF(arr, nelems);
    printf("\n%d\n", result);

    return 0;
}