#include <stdio.h>

int main() {

    const double pi = 3.14;

    double diametreEXT = 0;
    double diametreIN = 0;
    double hauteur = 0;

    printf("Entrez diametre exterieur > \n");
    scanf("%lf",&diametreEXT);
    printf("Entrez diametre interieur > \n");
    scanf("%lf",&diametreIN);
    printf("Entrez hauteur > \n");
    scanf("%lf",&hauteur);

    double rayon = diametreIN / 2;
    double volume = pi * rayon * rayon * hauteur;

    printf("Volume du cylindre : %lf",volume);


    return 0;
}
