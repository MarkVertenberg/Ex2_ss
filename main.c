#include <stdio.h>
#include "my_mat.h"

int main(){

    int matrix[N][N];
    char input;
    scanf("%c", &input);

    while(input != 'D'){
        switch(input){
            case 'A':
                matrix = insertToMatrix()
                break;
            default:
                break;
        }
        scanf("%c", &input);
    }
    return 0;
}
