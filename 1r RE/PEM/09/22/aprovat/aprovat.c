#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int nota;
    float assistencia;
    bool alumneAprova;

    printf("Introdueix la teva nota: ");
    if (scanf("%d", &nota) != 1 || nota < 0 || nota > 10) {
        printf("Nota no vàlida.\n");
        return 1;
    }

    printf("Introdueix el percentatge d'assistència: ");
    if (scanf("%f", &assistencia) != 1 ||
        assistencia < 0 || assistencia > 100) {
        printf("Percentatge d'assistència no vàlid.\n");
        return 1;
    }

    if (nota >= 9 && nota <= 10) {
        alumneAprova = true;
    } else if (nota >= 5 && assistencia >= 80) {
        alumneAprova = true;
    } else {
        alumneAprova = false;
    }

    if (alumneAprova) {
        printf("L'alumne aprova.\n");
    } else {
        printf("L'alumne no aprova.\n");
    }

    return 0;
}