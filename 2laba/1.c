#include <stdio.h>
#include <stdlib.h>

void print(int** matrix, int size)
{
    for(int i = 0; i<size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


int main()
{
    srand(time(NULL));
    int size = rand()%10, g = 0, v = 0, n = 0, m = 0, i = 0;
    int** matrix; 
    matrix = (int**)calloc(size, sizeof(int*));

    for(i = 0; i < size; i++)
    {
        matrix[i] = calloc(size, sizeof(int) * size);
    }
    i = 1;
    /* //d
    while(i != size*size){

        while(n < size-g) {
            matrix[m][n] = i;
            n++; i++;
        } n--; i--;
        if(i == size*size){  break;}

        while(m < size-v){
            matrix[m][n] = i;
            m++; i++;
        } m--;  v++; i--;
        if(i == size*size){  break;}

        while(n >= g){
            matrix[m][n] = i;
            n--; i++;
        } n++; g++; i--;
        if(i == size*size){  break;}

        while(m >= v){
            matrix[m][n] = i;
            m--; i++;
        } m++; i--;
        if(i == size*size){  break;}
        
    }
    */

    print(matrix, size);
}

