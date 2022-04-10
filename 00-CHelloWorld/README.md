# Resolución
* **1)** Descargué e instalé el compilador MinGW.
* **2)** Seleccioné los paquetes:
  * mingw32-gcc-bin.
  * mingw32-g++-bin.
  * msys-make-bin.
* **3)** Agregué los dos paths en las variables de entorno.
* **4)** Voy a utilizar el editor de texto Visual Studio Code, por lo que instalé la extención "C/C++".
* **5)** Instalé la extensión "C/C++ Compile Run" en Visual Studio Code para poder compilar y ejecutar los archivos C y C++ solamente presionando F6, para compilar y ejecutar con los argumentos por defecto, o F7, para compilar y ejecutar con los argumentos que especifique.
* **6)** Para que compile en el estándar c18, agregué a las flags de "C" que utiliza la extensión por defecto, el comando "-std=c18".
* **7)** Por ultimo, escribí el código, lo compilé y envié la salida al archivo "output.txt" al ejecutarlo (con el comando ".\HelloWorld.exe > output.txt").