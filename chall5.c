#include <stdio.h>
#include <stdlib.h>
#include <math.h>



 int main () {
 int x1,x2,y1,y2;
 float Distance;

 printf("Entrez les coordonnees du premier point : \n");
 scanf("%d %d",&x1,&y1);

 printf("Entrez les coordonnees du premier point : \n");
 scanf("%d %d",&x2,&y2);

 Distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("la distance est :%.2f",Distance);



     return 0;


 }  