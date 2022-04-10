# Resolución
* **1)** Descargué e instalé el compilador MinGW.
* **2)** Seleccioné los paquetes:
  * mingw32-gcc-bin.
  * mingw32-g++-bin.
  * msys-make-bin.
* **3)** Agregué los dos paths en las variables de entorno.
* **4)** Utilizo Visual Studio Code e instalé la extención "C/C++".
* **5)** Instalé la extensión "C/C++ Compile Run" en Visual Studio Code para poder compilar y ejecutar los archivos C y C++ solamente apretando F6 para compilar y ejecutar con los argumentos por defecto o F7 para compilar y ejecutar con los argumentos que especifique.
* **6)** Para que compile en el estandar c18, agregué la flag "-std=c18", a las que utiliza la extensión por defecto.
* **7)** Por ultimo, escribí el código, lo compilé y envié la salida en el archivo "output.txt" al ejecutarlo (con el comando ".\HelloWorld.exe > output.txt").