
#include <stdio.h>

int main() {
    int ch;
    printf("Enter the character \n");

    while(1){
        ch = getchar();
        if( ch=='!')
            break;
    }
    return 0;
}
