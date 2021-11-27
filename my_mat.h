#ifndef __MY_LIB__
#define __MY_LIB__

#define N 10 
#define TRUE 1
#define FALSE 0

// Inserting values to matrix with size NxN
void insertToMatrix(int matrix[N][N]);

// Floyd-Warshall Algorithm
void floydWarshallAlgo(int matrix[N][N]);

// IMPORTANT: isTherePath and shortestPath functions need to be used on matrixs that passed through the Algorithm!

// Returns if there path from i to j.
int isTherePath(int i, int j, int matrix[N][N]);

//  Returns the Shortest path from i to j, if there is no such path retrun -1.
int shortestPath(int i, int j, int matrix[N][N]);

#endif