#include "Conversion.h"
#include <stdio.h>

int main()
{
    // Declaro las variables:
    double limiteInferior, limiteSuperior, incremento;

    // Pido valores:
    fflush(stdout);
    printf("\nIngrese el valor del limite inferior:");
    scanf("%lf", &limiteInferior);
    printf("\nIngrese el valor del limite superior:");
    scanf("%lf", &limiteSuperior);
    printf("\nIngrese el valor del incremento:");
    scanf("%lf", &incremento);

    // Imprimo tablas:
    printTablas(limiteInferior, limiteSuperior, incremento);

    return 0;
}