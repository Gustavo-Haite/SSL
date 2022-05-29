#include "Conversion.h"
#include <assert.h>

int main()
{
    const double delta = 0.0000001;
    const double conversionCelcius = celcius(60) - 15.555555555555555;
    const double conversionFarenheit = farenheit(22.2223) - 72.00014;

    // Pruebas conversion a celcius
    assert(celcius(32) == 0);
    assert(conversionCelcius < delta);

    // Pruebas conversion a farenheit
    assert(farenheit(0) == 32);
    assert(conversionFarenheit < delta);

    return 0;
}