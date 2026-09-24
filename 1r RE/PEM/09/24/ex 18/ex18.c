#include <stdio.h>
#include <math.h>

void main() {

    float numDecimal; float numPartDecimal;
    int numPartEntera;


    printf("Introdueix un nombre decimal \n");
    scanf("%f", &numDecimal);

    
   numPartEntera = (int)numDecimal;
   numPartDecimal = numDecimal - numPartEntera;

    printf("Nombre enter: %d\nNombre Decimal: %.2f\n", numPartEntera, numPartDecimal);

    getchar();
}