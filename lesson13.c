#include<stdio.h>
#include<stdlib.h>

int dumb(void){
    int a;
    a = a+16;
    printf("In the function %d",a);
    return a;

}
int main(){
    int a = 10;
    printf("The number in main function is %d",a);
    dumb();
    printf("The number in after calling function is %d",a);
    return 0;
}
