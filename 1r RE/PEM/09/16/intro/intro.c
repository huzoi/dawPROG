#include <stdio.h>

void main() {
    int dia = 0;
    int count = 0;

    printf("Quin dia es avui?\n");
    scanf("%d", &dia);


    while (dia != 16) {
        printf("\nAvui no som %d, subnormal, intenta-ho de nou\n", dia);
        count++;

        printf("\nQuin dia es avui?\n");
        scanf("%d", &dia);
    }

    count++;

        if (count >= 3) {
            printf("\nMolt be! Si que saps el dia que som, quin campio! Pero t'ha costat %d intents, aixi que segueixes sent subnormal \n", count);
        } 
                else {
                    printf("\nMolt be! Si que saps el dia que som, quin campio!\n");
                }

    getchar();
}