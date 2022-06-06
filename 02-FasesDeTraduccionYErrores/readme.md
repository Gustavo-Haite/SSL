# Resolución
**1.** Preprocesador

**b.** Luego de preprocesar "hello2.c" y generar "hello2.i", con el comando "gcc -E hello2.c -o hello2.i", en "hello.i", visualizo que se encuentran las declaraciones de las funciones de la librería standard output. También, observo que hay numerales, que es una notación que hace el preprocesador, para devolver un mejor diagnostico. Finalmente, se encuentra el código de "hello2.c", lo unico, se reemplazó el comentario por un espacio.

**d.** La declaración de la función printf, devuelve un entero y espera por lo menos un argumento. La variable "s" no es necesaria, es conveniente. Es para nombrar los diferentes argumentos que se esperan. El primer argumento es un puntero a un const char, que al ser const, no podemos modificar lo que apunta. Es decir, si utilizamos "s" nos da un puntero, si la desreferenciamos, nos da un const char, que no podemos modificar. Por lo que "s", es un puntero de solo lectura, pero puede modificarse y apuntar a otra cosa, que va a ser de solo lectura. La keyword "restrict", es una ventaja, porque le da la información al compilador, que "s" apunta a un objeto y es el único que lo apunta, lo que le permite, al compilador, optimizar como considere, por ejemplo, haciendo cosas por paralelo.

**e.** No hay diferencias en el código, entre "hello3.c" y "hello3.i", porque no hay ningun define, include o algún comentario para reemplazar por un espacio. Lo único distinto, son los comentarios que realiza el preprocesador.

**2.** Compilación

**c.**