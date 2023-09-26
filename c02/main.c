#include <stdio.h>

int main() {
    double nb1 = 0;
    double nb2 = 0;
    double nb3 = 0;
    double somme = 0;
    double moyenne = 0;

    printf("Entrez nombre 1 > \n");
    scanf("%lf",& nb1);
    printf("Entrez nombre 2 > \n");
    scanf("%lf",& nb2);
    printf("Entrez nombre 3 > \n");
    scanf("%lf",& nb3);

    somme = nb1 + nb2 + nb3;
    printf("La somme de tout ces nombres est : %.2lf \n", somme);

    moyenne = somme / 3;
    printf("La moyenne est : %.2lf", moyenne);
    return 0;
}
