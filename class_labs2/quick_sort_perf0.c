/*	Test driver for sorting solutions. 
	   Written by: 90cos
	   Date: 2018

*/
#include <stdio.h>
#include <stdbool.h>

//	Constants
#define cMax_Ary_Size 15

void swap(int* a, int* b, int * count) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
    *count += 3;
} 

/*	Prototype Declarations */
void quickSort      (int *data, int left, int right, int* count);
	
int main ( void ) 
{
/*	Local Declarations */
	int countExch;
	int	ary[cMax_Ary_Size] = {89, 72, 3,  15, 21, \
	                           57, 61, 44, 19, 98, \
	                            5,  77, 39, 59, 61};

/*	Statements */
	printf( "Unsorted array: ");
	for (int i = 0; i < cMax_Ary_Size; i++ )
		printf( "%3d", ary[ i ] );
		
	countExch = 0;
	quickSort (ary, 0, cMax_Ary_Size - 1, &countExch);
	
	printf( "\nSorted array:   " );
	for (int i = 0; i < cMax_Ary_Size; i++)
		printf( "%3d", ary[ i ] );
	printf( "\n" );
	
	printf("Total exchanges: %d\n", countExch);
	return 0;
}	/* main */


/* This function takes last element as pivot, places 
   the pivot element at its correct position in sorted 
    array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right 
   of pivot */
int partition (int arr[], int low, int high, int * count) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 

    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than the pivot 
        if (arr[j] < pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j], count); 
        } 
    } 
    swap(&arr[i + 1], &arr[high], count); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */

  /*	================== quickSort =====================
	Array  data[left..right] sorted using recursion.
	   Pre    data is array to be sorted
	          left identifies first element in data
	          right identifies last element in data
	          count is exchange accumulator 
	   Post   array sorted */
void quickSort (int *data, int left, int right, int* count)
{ 
    if (left < right) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(data, left, right, count); 
        
        // Separately sort elements before 
        // partition and after partition 
        quickSort(data, left, pi - 1, count); 
        quickSort(data, pi + 1, right, count); 
    } 
} 