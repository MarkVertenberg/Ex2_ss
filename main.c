#include <stdio.h>

int main(){

    char input = 's';
    scanf("%c", &input);

    while(input != 'D'){
        printf("input: %c\n", input);
        scanf("%c", &input);
    }
    return 0;
}
