#include <stdio.h>
#include <stdlib.h>

int** genRandMatrix(int size, int maxValue)
{
    int** matrix; 
    matrix = (int**)malloc(size*sizeof(int*));
    for (int j = 0; j < size; j++)
    {
        int first = rand()%10;
        matrix[j] = calloc( first+1, sizeof(int) * (first+1));
        matrix[j][0] = first;
        for (int i = 1; i<=first; i++)
        {
            matrix[j][i] = rand()%maxValue;
        }
    }
    matrix[size] = 0;

    return matrix;
}

void print(int** matrix)
{
    int j = 0, s = 0;
    while (matrix[j] != NULL)
    {
        s ++; j++;
    }
    printf("%d\n", s);

    for(int i = 0; i<s; i++)
    {
        printf("%d: ", matrix[i][0]);
        int j = 1;
        while (matrix[i][j] != NULL)
        {
            printf("%d ", matrix[i][j]);
            j++;
        }
        printf("\n");
    }
}


int main()
{
    srand(time(NULL));
    int size = rand()%10;
    int maxValue = 100;
    int** matrix = genRandMatrix(size, maxValue);
    print(matrix);

    free(matrix);
    return 0;
}
