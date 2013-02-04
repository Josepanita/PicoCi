# PicoCi

PicoCi (la `i` va por improved) es un fork del proyecto [PicoC] originalmente creado por Zeek Saleeba, traducido al español.

Es un interprete de lenguage C, soporta casi todas las funciones de lenguaje C (Visitar la web del proyecto original para ver las limitaciones), como:

* Sintaxis practicamente idéntica a C

* Soporte a muchos tipos de datos
	+ Numericos
	+ Caracteres
	+ Estructuras
	+ y mas...

* Soporte a Inclusion de archivos (`#include <archivo>`)

* Soporte a definicion de funciones, y a llamada de funciones pertenecientes a las librerias Standard Preenlazadas

* Librerias Standard Preenlazadas 

* [NUEVO] Sintáxis precompilada en una libreria dinámica, de esta manera puede ser traducida a cualquier idioma fácilmente.

* [NUEVO] Errores precompilados en una libreria dinámica, de esta manera pueden ser traducidos a cualquier idioma fácilmente.

* Consola interactiva (como Python).

* Galeria de Tests con muestras de las capacidades del interprete, y de su sintaxis.

## Compilando PicoC

PicoC puede ser compilado desde una plataforma UNIX/Linux/POSIX usando `make`.


## Copyright

	picoc is published under the "New BSD License".
	http://www.opensource.org/licenses/bsd-license.php


	Copyright (c) 2009-2011, Zik Saleeba
	All rights reserved.

	Redistribution and use in source and binary forms, with or without 
	modification, are permitted provided that the following conditions are 
	met:

	    * Redistributions of source code must retain the above copyright 
	      notice, this list of conditions and the following disclaimer.
	      
	    * Redistributions in binary form must reproduce the above copyright 
	      notice, this list of conditions and the following disclaimer in 
	      the documentation and/or other materials provided with the 
	      distribution.
	      
	    * Neither the name of the Zik Saleeba nor the names of its 
	      contributors may be used to endorse or promote products derived 
	      from this software without specific prior written permission.

	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
	"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
	LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
	A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
	OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
	SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
	LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
	DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY 
	THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
	(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
	OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

[PicoC]: http://code.google.com/p/picoc/