#include<stdio.h>
int main(){
    int x;
    int i;
    printf("Enter the number");
    scanf("%d",&x);
    here:
    printf("%d\n",x);
    x--;
    if(x<4)
    goto there;
    if(x>0)
    goto here;
there:
return 0;
}

    
