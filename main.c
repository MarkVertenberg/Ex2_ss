#include <stdio.h>

int main(){

    char input = ''
    scanf("%c", &input)

    while(input != 'D'){
        printf("input: %c", input)
        scanf("%c", &input)
    }
    return 0;
}
