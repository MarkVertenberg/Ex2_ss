#include <stdio.h>
#include "my_mat.h"

void print_mat(int r, int c, int m[r][c]){
        for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                        printf("\t%d", m[i][j]);
                }
                printf("\n");
        }
        return;
}

int main(){

    int matrix[N][N];
    char input;
    scanf("%c", &input);

    while(input != 'D'){
        switch(input){
            case 'A':
                matrix = insertToMatrix();
                print_mat(N, N, matrix);
                break;
            default:
                break;
        }
        scanf("%c", &input);
    }
    return 0;
}
