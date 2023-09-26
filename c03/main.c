#include <stdio.h>

int main() {

    int nb = 124;
    int hour = 60;

    int calcul1 = nb / hour;
    int calcul2 = nb % hour;
    printf("124mins correspond a : %d H %d min",calcul1,calcul2);
    return 0;
}