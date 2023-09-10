#include <stdio.h>
#include <stdlib.h>

int* genRandArray(int size, int maxValue)
{
    int* arr = calloc(size, sizeof(int)*size);
    *arr = size;
    for (int i = 0; i<size; i++)
    {
        arr++;
        *arr = rand()%maxValue;
    }
    for (int i = 0; i<size; i++)
    {
        arr--;
    }
    return arr;
}

void print(int* arr)
{
    printf("%d: ", *arr);
    arr++;
    while (*arr != NULL)
    {
        printf("%d ", *arr);
        arr++;
    }
    printf("\n");
}


int main()
{
    srand(time(NULL));
    int size = rand()%10;
    int maxValue = 100;
    int* arr = genRandArray(size, maxValue);
    print(arr);

    free(arr);
    return 0;
}