# CEscript

CEscript es un fork del proyecto [PicoC], traducido al español.

Es un interprete de lenguage C, soporta casi todas las funciones de lenguaje C (Visitar la web del proyecto original para ver las limitaciones), como:

* Sintaxis practicamente idéntica a C

* Soporte a muchos tipos de datos
	+ Numericos
	+ Caracteres
	+ Estructuras
	+ y mas...

* Soporte a Inclusion de archivos (`#include <archivo>`)

* Soporte a definicion de funciones, y a llamada de funciones pertenecientes a las librerias Standard Preenlazadas

* [Librerias Standard] Preenlazadas 

* Consola interactiva (como Python).

* Galeria de [Tests] con muestras de las capacidades del interprete, y de su sintaxis.


## Compilando CEscript

CEscript puede ser compilado desde una plataforma UNIX/Linux/POSIX usando `make`.

[PicoC]: http://code.google.com/p/picoc/
[Librerias Standard]: ./develop/cstdlib/
[Tests]: ./develop/test/