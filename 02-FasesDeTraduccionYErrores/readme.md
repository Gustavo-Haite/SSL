# Resolución
**1.** Preprocesador

**b.** Luego de preprocesar "hello2.c" y generar "hello2.i", con el comando "gcc -E hello2.c -o hello2.i", en "hello.i", visualizo que se encuentran las declaraciones de las funciones de la librería standard output. También, observo que hay numerales, que es una notación que hace el preprocesador, para devolver un mejor diagnostico. Finalmente, se encuentra el código de "hello2.c", lo unico, se reemplazó el comentario por un espacio.

**d.** La declaración de la función printf, devuelve un entero y espera por lo menos un argumento. La variable "s" no es necesaria, es conveniente. Es para nombrar los diferentes argumentos que se esperan. El primer argumento es un puntero a un const char, que al ser const, no podemos modificar lo que apunta. Es decir, si utilizamos "s" nos da un puntero, si la desreferenciamos, nos da un const char, que no podemos modificar. Por lo que "s", es un puntero de solo lectura, pero puede modificarse y apuntar a otra cosa, que va a ser de solo lectura. La keyword "restrict", es una ventaja, porque le da la información al compilador, que "s" apunta a un objeto y es el único que lo apunta, lo que le permite, al compilador, optimizar como considere, por ejemplo, haciendo cosas por paralelo.

**e.** No hay cambios en la semántica de nuestro lenguaje, entre "hello3.c" y "hello3.i", porque no hay ningun define, include o algún comentario para reemplazar por un espacio. Lo único distinto, son los comentarios que realiza el preprocesador.

**2.** Compilación

**c.** En el código assembler, se hacen movimienos en la pila para llamar a las funciones. Las primeras instrucciones de main son para "preparar" la pila para llamar a la función "prontf" y el código asume un retorno del llamado. Finalmente mueve un cero al acumulador y finaliza el programa.

**3.** Vinculación
**c.** El resultado que salió por la terminal fue:
```
La respuesta es 4200880
```
Esto se debe a que no se paso el parametro del puntero, por lo que el comportamiento es indefinido.

**5** Remoción de prototipo

**b.**
Al compilar "hello7.c". El compilador, en mi caso gcc, me tiró 2 warnings:
- warning: implicit declaration of function 'printf' [-Wimplicit-function-declaration]
- warning: incompatible implicit declaration of built-in function 'printf'

built-in, significa que gcc y clang le dan un tratamiento especial a printf para detectar ciertos errores. Y "incompatible implicit declaration" es porque la declaración implicita de printf no coincide con lo que el compilador tiene registrado como declaración de printf.
El código funciona, porque el estandar ISO C99, no específica que hacer cuando hay una regla del lenguaje que no se cumple (en este caso sintácticas y semánticas), por lo que cada compilador puede decidir hacer cosas diferentes, como cortar con un mensaje de error, tratar de compilar hasta el final o hasta generar un archivo ejecutable. Pero lo seguro, es que el comportamiento es indefinido cuando se llega a esa instancia. En mi caso, gcc genera el código ejecutable, que no esta mal. Decidió ser más flexible, puso warnings pero permitió compilar. En resumen, el funcionamiento, va a depender del compilador, clang no compila porque no cumple con el éstandar, gcc, en cambio, aunque no cumple con el éstandar. decide flexibilar para no romper código existente.

**6** Compilación Separada: Contratos y Módulos

**b.** Generé el ejecutable, que lo llame "hello8.exe, basandome en las 2 unidades de traducción, "hello8.c" y "studio.c", con el siguente comando: "gcc hello8.c studio1.c -o hello8.exe". Usé a gcc como guía de proceso de traducción, entonces de "hello8.c" y de "studio1.c", genera los archivos objetos y invoca al linker para generar el ejecutable.

**c** No hay forma de chequear que ocurre si eliminamos o agregamos argumentos a la invocación de printf, porque estamos en funcionamiento indefinido, por la falta de prototipo. Esto se debe a que el linker no hace ninguna verificación, simplemente enlaza los códigos objetos. Lo que pasa en el código assembler, es que al ser monótona, lo único que sucede es que se pasan 3 argumentos y al retornar de la función, se desapilan 2, por lo que hay un desbalance en la pila, pero estos ya son temas de implementación, que dependen de cada procesador. En mi caso, gcc, genera el código ejecutable, pero tiene un funcionamiento similar a "hello5.c".

**d** Las ventajas de incluir el contrato en los clientes y en el proveedor, es que nos aseguramos, que el cliente utilice el producto correctamente y que el proveedor está entregando el producto correcto.