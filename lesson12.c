#include<stdio.h>
#include<stdlib.h>

void repeat (int serko){
    int a;
    for(a=0;a<serko;a++){
        printf("Blah");
    }

} 
int main(){
    puts("Pranith said \t");
    repeat(5);
    puts("\n Manju said \t");
    repeat(10);
    return 0;
}
