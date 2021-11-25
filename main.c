#include <stdio.h>
#include "my_mat.h"

/*void print_mat(int r, int c, int m[N][N]){
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("\t%d", m[i][j]);
        }
        printf("\n");
    }
}
*/

int main(){

    int matrix[N][N];
    char input;
    scanf("%c", &input);
    int i;
    int j;
    while(input != 'D'){
        switch(input){
            case 'A':
                insertToMatrix(matrix);
                break;
            case 'B':
                scanf("%d", &i);
                scanf("%d", &j);
                isTherePath(i, j, matrix);
                break;
            case 'C':
                scanf("%d", &i);
                scanf("%d", &j);
                fastestPath(i, j, matrix);
                break;
            default:
                return 1; // Invalid command
        }
        scanf("%c", &input);
    }
    return 0;
}
