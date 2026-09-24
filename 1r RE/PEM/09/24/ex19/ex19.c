#include <stdio.h>

void main() {

    int midaTira; int midaLlisto; int numLlistons; int tiraResta;

    printf("Introdueix la mida de la tira (en cm)\n");
    scanf("%d", &midaTira);

    printf("Introdueix la mida de cada llisto (en cm)\n");
    scanf("%d", &midaLlisto);

    numLlistons = (midaTira / midaLlisto);
    tiraResta = (midaTira % midaLlisto);

    printf("Obtindras %d Llistons de %d cm\nEt sobren %d cm restants de tira\n", numLlistons, midaLlisto, tiraResta);

    getchar();
}