#include "Conversion.h"
#include <stdio.h>

double celcius(double farenheit)
{
    return 5 * (farenheit - 32) / 9;
}

double farenheit(double celcius)
{
    return ((9 * celcius) / 5) + 32;
}

void printTablas(double limiteInferior, double limiteSuperior, double incremento)
{
    printTablaCelcius(limiteInferior, limiteSuperior, incremento);
    printf("\n\n");
    printTablaFarenheit(limiteInferior, limiteSuperior, incremento);
}

void printTablaCelcius(double limiteInferior, double limiteSuperior, double incremento)
{
    printf("\n\n");
    printf("|      C      |      F      |\n");
    printf("|-------------|-------------|\n");
    printFilas(limiteInferior, limiteSuperior, incremento, celcius);
}

void printTablaFarenheit(double limiteInferior, double limiteSuperior, double incremento)
{
    printf("|      F      |      C      |\n");
    printf("|-------------|-------------|\n");
    printFilas(limiteInferior, limiteSuperior, incremento, farenheit);
}

void printFilas(double limiteInferior, double limiteSuperior, double incremento, double (*conversion)())
{
    for (double cont = limiteInferior; cont <= limiteSuperior; cont += incremento)
    {
        printFila(cont, conversion);
    }
}

void printFila(double temperatura, double (*conversion)())
{
    printf("| %-11.2lf | %11.2lf |\n", temperatura, conversion(temperatura));
}