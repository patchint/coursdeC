#include <stdio.h>
#include <math.h>

double sqr(double a) {
    return a*a;
}

double Distance(double x1, double y1, double x2, double y2) {
    return sqrt(sqr(y2 - y1) + sqr(x2 - x1));
}

int main() {

    double x1 = 0;
    double x2 = 0;
    double y1 = 0;
    double y2 = 0;

    printf("Saisir x1 > \n");
    scanf("%lf",& x1);
    printf("Saisir y1 > \n");
    scanf("%lf",& y1);
    printf("Saisir x2 > \n");
    scanf("%lf",& x2);
    printf("Saisir y2 > \n");
    scanf("%lf",& y2);

    printf("Les coordonnees du point x1,y1 est : %.2lf,%.2lf\n",x1,y1);
    printf("Les coordonnees du point x2,y2 est : %.2lf,%.2lf\n",x2,y2);



    printf("La distance entre ces deux points est : %f",Distance(x1, y1, x2, y2));

    return 0;
}
