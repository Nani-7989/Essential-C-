#include<stdio.h>
int main(){
  int a;
  printf("Select your choice \n1:add\n2:sub\n3:mul\n4:div\n");
scanf("%d",&a);
switch(a){
    case 1 :
    printf("addition of two numbers are");
    break;
    case 2:
    printf("Sub");
    break;
    case 3:
    printf ("Mul");
    break;
    case 4:
    printf("Div");
    break;
return 0;
}
}
