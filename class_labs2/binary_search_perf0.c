#include <stdlib.h>
#include <stdio.h>

int binarySearch(const int *arr, int key, int n);

int main(void)
{
    int arr[] = {12, 14, 19, 29, 34, 56, 67, 89, 109, 115};
    printf("Array:");
    for (int i = 0; i < sizeof(arr)/4; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n\nPlease enter the search key: ");
    char buf[100];
    int search;
    int n = sizeof(arr)/4;
    if (buf == fgets(buf, 99, stdin))
    {
        int ret;

        ret = sscanf(buf, "%d", &search);
        if (ret == 1)
        {
            printf("\nSearching for %d\n", search);
        }
        else
        {
            printf("\nAre you serious right now?\n");
            return -1;
        }
        
    }
    int result = binarySearch(arr, search, n);
    printf("\nThe key %d was found at %d (Starting from 0)\n", search, result);
    return 0;
}

int binarySearch(const int *arr, int key, int n)
{
    int left = 0;
    int right = n - 1;
    
    while (left <= right)
    {
        int m = left + (right - left) / 2;
        if (arr[m] == key) 
        {
            return m;
        }
        else if (arr[m] < key)
        {
            left = m + 1;
        }
        else if (key < arr[m])
        {
            right = m -1;
        }
    }
    return -1;
}