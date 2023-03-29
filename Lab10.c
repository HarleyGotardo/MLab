#include <stdio.h>
#include <stdlib.h>

int dynArrMode(int x[], int n);

int main()
{
    int size = 10;
    int* arr = (int*) malloc(sizeof(int)*size);
    int ctr = 0;
    int input;

    printf("Enter a number: ");
    scanf("%d", &input);


    while(input != -1)
    {
        if(ctr == size)
        {
            size++;
            arr = (int*) realloc(arr, size * sizeof(int));
        }
        arr[ctr] = input;
        ctr++;
        printf("Enter a number: ");
        scanf("%d", &input);
    }

    printf("Array Content: ");
    for(int i=0; i<ctr; i++)
        printf("%d,", arr[i]);

    printf("\nMode: ");
    int mode = dynArrMode(arr, ctr);
    printf("%d", mode);

    arr = NULL;
    free(arr);

    return 0;
}

int dynArrMode(int x[], int n)
{
    if(n == 0)
        return -1;

    int maxCtr = 0;
    int mode = x[0];
    int currentCtr;

    for(int i=0; i<n; i++)
    {
        currentCtr = 0;
        for(int j=0; j<n; j++)
        {
            if(x[j] == x[i])
                currentCtr++;
        }
        if(currentCtr > maxCtr)
        {
            maxCtr = currentCtr;
            mode = x[i];
        }
    }

    return mode;
}