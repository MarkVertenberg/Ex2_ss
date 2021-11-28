#include <stdio.h>
#include "my_mat.h"

// Inserting values to matrix with size NxN
void insertToMatrix(int matrix[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Floyd-Warshall Algorithm
void floydWarshallAlgo(int matrix[N][N]){
    for(int k = 0; k < N; k++){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(i != j && i != k && j != k){
                    if(matrix[i][j] == 0){
                        if(matrix[i][k] != 0 && matrix[k][j] != 0){
                            matrix[i][j] = matrix[i][k] + matrix[k][j];
                        }
                    }
                    else{
                        if(matrix[i][j] > matrix[i][k] + matrix[k][j] && matrix[i][k] != 0 && matrix[k][j] != 0){
                            matrix[i][j] = matrix[i][k] + matrix[k][j];
                        }
                    }
                }
            }
        }
    }
}

// Important: isTherePath and fastestPath functions need to be used on matrixs that passed through the Floyd-Warshall Algorithm!

// Returns if there path from i to j. 
int isTherePath(int i, int j, int matrix[N][N]){
    if(matrix[i][j] != 0){
        return TRUE;
    }
    return FALSE;
}

//  Returns the Shortest path from i to j, if there is no such path retrun -1.
int shortestPath(int i, int j, int matrix[N][N]){
    if(matrix[i][j] != 0){
        return matrix[i][j];
    }
    return -1;
}