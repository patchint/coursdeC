#include <stdio.h>

int main() {

    double metre = 0;
    const double unpied = 3.28084;

    printf("Saisir une valeur en metre > \n");
    scanf("%lf",&metre);

    double resultat = metre * unpied;

    printf("Nous avons %lf pieds",resultat);

    return 0;
}
