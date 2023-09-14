#include <stdio.h>
#include <stdlib.h>

 int main ()
 {
 char nom[20],prenom[20],sexe[20];
 int age;
 double tele;

  printf("entrez votre nom:\n");
  scanf (" %s" ,nom);
  

  printf("entrez votre prenom:\n");
  scanf (" %s" ,prenom);

   printf("entrez votre sexe:\n");
  scanf (" %s" ,sexe);

   printf("entrez votre age:\n");
  scanf (" %d",&age) ;

  printf("entrez votre numero de telephone:");
  scanf (" %s" ,&tele);

  printf("your first name is %s , last name is %s , your age is %d year old , your sexe is %s , your tele number is %d ",nom,prenom,age,sexe,tele);

 }