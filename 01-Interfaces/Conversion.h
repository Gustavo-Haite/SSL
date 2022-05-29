#ifndef Conversion_h
#define Conversion_h

void printTablas(double limiteInferior, double limiteSuperior, double incremento);
void printTablaCelcius(double limiteInferior, double limiteSuperior, double incremento);
void printTablaFarenheit(double limiteInferior, double limiteSuperior, double incremento);
void printFilas(double limiteInferior, double limiteSuperior, double incremento, double (*conversion)());
void printFila(double temperatura, double (*conversion)());
double celcius(double farenheit);
double farenheit(double celcius);

#endif