#include <stdio.h>
#include <stdlib.h>

int differences(int arr[]);

int main(void)
{
    int len;
    printf("Enter the length of first array:");
    scanf("%d", &len);
    getchar();
    printf("\n\n%d\n\n", len);
    int* arr = (int *)malloc(len * sizeof(int));
    printf("Enter %d elements of first array\n");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
        getchar();
    }
    printf("%d", arr[1]);
    return 0;
}

int difference(int arr[])
{
    int big_diff = 0;
    return big_diff;
}