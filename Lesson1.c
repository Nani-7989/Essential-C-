#include<stdio.h>
#include<conio.h>

int main()
{
   int museum = 12;
   int painting = 16;
   int sculptures = 4;

   int totalArtifacts = museum * (painting+sculptures);
   printf("The total articracts in the museums are %d in counted",totalArtifacts);

    return 0;
}
