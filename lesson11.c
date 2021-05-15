#include <stdio.h>
#include <stdlib.h>

int play(void) {

    int r;
    r = rand() % 6;
    r++;
    return r;
}
int main (){
    int a,b,c;
    a = play();
    b = play();
    c = play();
    printf("you rolled %d - %d - %d",a,b,c);

}
