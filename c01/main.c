#include <stdio.h>

int main() {
    char prenom[100];

//    fflush(stdin);
//    printf("Tapez votre prenom : \n");
//    fgets(prenom,100,stdin);
//    printf("\nBonjour %s%s",prenom,"\n");

    do {
        fflush(stdin);
        printf("Tapez votre prenom : ");
        fgets(prenom,100,stdin);
        printf("Bonjour %s",prenom);
    } while (prenom[0] != '\n');

    return 0;
}
