#include <stdio.h>
#include <stdlib.h>

 int main ()
 {
    float fahrenheit, celsius;
    char sensation[20];


    printf("Entrez la température en Fahrenheit : ");
    scanf("%f", &fahrenheit);


    celsius = (fahrenheit - 32) / 1.8;


    printf("La température en Celsius est : %.2f\n", celsius);


    if (celsius < 0)
       printf( "très froid");

    else if (celsius < 15)
       printf ("froid");

    else if (celsius > 47)
       printf("très chaud");

    else
        printf( "chaud");

    return 0;


 }