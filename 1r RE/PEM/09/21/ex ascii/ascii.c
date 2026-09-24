#include <stdio.h>


void main() {

    int codi;
    int toLow;
    int resultat;
    char lletra;

    printf("Introdueix una lletra (A-Z / a-z)\n");
    scanf("%c", &lletra); scanf("%d", &codi);

        if (codi >= 97 && codi <= 122) {
            toLow = codi - 32;

                resultat = toLow;
                printf("El codi ASCII de %c es %d\n", lletra, resultat);
                getchar();
        }

            else if (codi >= 65 && codi <= 90) {
                resultat = codi;
                printf("El codi ASCII de %c es %d\n", lletra, resultat);
                getchar();
            }

                else {
                    printf("Valor no valid\n");
                    getchar();
                }
}