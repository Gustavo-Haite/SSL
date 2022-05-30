# Resolución 
**1)** Escribí el Makefile, donde con el comando "all" invoco a "TablasDeConversion", que vincula los códigos objetos ("TablasDeConversion.o" y "Conversion.o"), que previamente fueron preprocesados y compilados. Además, con el comando "tests", invoco a "ConversionTest" que vincula los códigos objetos "ConversionTest.o" y "Conversion.o", que previamente fueron preprocesados y compilados. También, con el comando "clean" elimino los códigos objetos ,y "TablasDeConversion" y "ConversionTest". Cabe aclarar, que los códigos objetos, además de necesitar su código C, necesitan la librería "Conversion.h".

**2)** Luego, escribí la librería "Conversion.h", donde declare todas las funciones requeridas, junto con sus parámetros de entrada (todas son de tipo double).
Las funciones son:
* printTablas: Que recibe los límites y el incremento.
* printTablaCelcius: Mismo que caso anterior.
* printTablaFarenheit: Mismo que caso anterior.
* printFilas: Que recibe los límites, el incremento y la función como puntero, para convertir de celcius a farenheit, o viceversa.
* printFila: Que recibe la temperatura y la función como puntero, para convertir de celcius a farenheit, o viceversa.
* celcius: Que recibe el valor en farenheit.
* farenheit: Que recibe el valor en celcius.
  
**3)** Escribí "ConversionTest.c", donde incluyo las librerías "Conversion.h" y "assert.h". Luego determine una variable delta, para que mi error en los tests sea de 0.0000001, y dos variables de prueba, para probar las converiones, tanto de celcius a farenheit, como viceversa. Busqué que sean numeros con muchos decimales o periodicos y les reste el valor que me daba la calculadora, para que el valor de esas variables tiendan a 0. Cabe aclarar, que todas las variables, son de tipo const double. Después, utilicé la función assert con los casos bases (convierto de 32 °F a 0 °C y viceversa, y lo igualo a lo que debería dar) y luego utilicé la funcion assert, evaluando si las variables de las conversiones que tendían a 0, anteriormente mencionadas, son menores que el delta que definí previamente.

**4)** Escribí "Conversion.c", donde incluí las librerías "Conversion.h" y "stdio.h", donde escribí las funciones, anteriormente definidas en "Conversion.h".
* printTablas: Que invoca a printTablaCelcius, escribe dos espacios y invoca a printTablaFarenheit.
* printTablaCelcius: Que escribe el encabezado de la tabla e invoca a prinFilas.
* printTablaFarenheit: Mismo que caso anterior.
* printFilas: Que recorre la funcion for desde el limite inferior, hasta el superior, aumentando con el valor del incremento, invocando a la funcion printFila.
* printFila: Que recibe la temperatura y la convierte según la función pasada por parámetro, donde la temperatura esta justificada a la izquierda y la conversión a la derecha.
* celcius: Que recibe el valor en farenheit y lo convierte a celcius.
* farenheit: Que recibe el valor en celcius y lo convierte a farenheit.

**5)** Escribí "TablasDeConversion.c", donde incluí las librerías "Conversion.h" y "stdio.h" ,porque utilizo la función fflush(stdout) para limpiar el buffer, ya que pido que ingresen los valores de los límites y del incremento por pantalla, y con esos valores invoco a la función printTablas.