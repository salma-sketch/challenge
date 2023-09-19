#include <stdio.h>

int main() {
    int annee, choix;
    int mois, jours, heures, minutes, secondes;

    printf("Entrez une annee : ");
    scanf("%d", &annee);

    printf("Menu :\n");
    printf("1. Convertir en mois\n");
    printf("2. Convertir en jours\n");
    printf("3. Convertir en heures\n");
    printf("4. Convertir en minutes\n");
    printf("5. Convertir en secondes\n");
    printf("Choisissez une option : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            mois = annee * 12;
            printf("%d annees = %d mois\n", annee, mois);
            break;
        case 2:
            jours = annee * 365;
            printf("%d annees = %d jours\n", annee, jours);
            break;
        case 3:
            heures = annee * 365 * 24;
            printf("%d annees = %d heures\n", annee, heures);
            break;
        case 4:
            minutes = annee * 365 * 24 * 60;
            printf("%d annees = %d minutes\n", annee, minutes);
            break;
        case 5:
            secondes = annee * 365 * 24 * 60 * 60;
            printf("%d annees = %d secondes\n", annee, secondes);
            break;
        default:
            printf("Option invalide.\n");
    }

    return 0;
}