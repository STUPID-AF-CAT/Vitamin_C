#define BSO(n) (sizeof(n)/sizeof(n[0]))
#define APRINTF(n) for (int i = 0; i < BSO(n); i++) {printf(" %d", n[i]);}

#include <stdio.h>
#include <stdlib.h>

int BS();
int * array(FILE * file);

int main()
{
    FILE * numbers;
    if ((numbers = fopen("numbers.txt", 'r')) != NULL)
    {
        int arr[] = array(numbers);
    }
    else
    {
        printf("\nFile not found!\n");
    }
    return 0;
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
                printf("\nSearching for %d\n", num);
                return num;
            }
            else
            {
                printf("\nAre you serious right now?\n");
                return -1;
            }
            
        }
}

int * array(FILE * file) {
    int  i=0,totalNums,totalNum,j=0;
    size_t count;
    int numbers[100][100];
    char *line = malloc(100);

    while(getline(&line, &count, file)!=-1) {
        for (int j = 0; count > 0; count--, j++)
            sscanf(line, "%d", &numbers[i][j]);
        i++;
    }

    totalNums = i;
    totalNum = j;
    for (i=0 ; i<totalNums ; i++) {
      for (j=0 ; j<totalNum ; j++) {
        printf("\n%d",  numbers[i][j]);
      }
    }
    fclose(file);
    return 0;
}