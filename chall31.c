#include <stdio.h>
#include <stdlib.h>

int main()
{


        int N ,i,M;
   printf("Entrez un nombre : \n");
    scanf("%d", &N);

    for (i=0;i<=10;i++){
             M=N*i;
        printf("%d X %d = %d\n" ,N,i,M);
    }



    return 0;
} 