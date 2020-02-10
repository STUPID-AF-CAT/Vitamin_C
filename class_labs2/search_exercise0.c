// C code to perform a sequential search of  x in arr[]. If x 
// is present then return its location, otherwise 
// return -1 

#include <stdio.h> 

int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 

int main(void) 
{ 
    int arr[] = {4, 6, 1, 2, 5, 3}; 
    int x = 6; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = search(arr, n, x); 
    (result == -1) ? printf("Element is not present in array") 
                : printf("Element is present at index %d", 
                            result); 
    return 0; 
}