#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,N;

    printf("entrez un nombre :\n");
    scanf("%d", &N );

    for (i=2; i<N-1; i++)
    {
        if (N%i==0)
            printf("le nombre est pas premier\n");
        else
            printf("le nombre est premier\n");

    }

    return 0;
} 