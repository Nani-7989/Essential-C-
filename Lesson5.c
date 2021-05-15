
#include <stdio.h>

int main() {
    int a;
    int b;
    int min;
    int sec;
    printf("Enter the minutes");
    scanf("%d",&min);
    sec = min*60;
    for (a=0;a<sec;a++){
        printf("The time remaining is %d",sec-a);
    }

    return 0;
}
