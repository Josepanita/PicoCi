Librerias Enlazadas
========

Aqui se encuentran los enlaces hacia las librerias Standard de C (C STL) para CEscript, cualquier libreria Libre/propietaria puede ser incluida, solamente necesitas hacer el vinculo aqui, un ejemplo con cescript.h/cescript.c, en las cabeceras declaras y desarrollas las funciones de tu libreria, y en el script se hacen los enlaces hacia CEscript.

# Funciones Por Defecto

## Operaciones con caracteres `ctype.h`
<table>
	<tr>
		<td>
			<ul>
				<li>isalnum()</li>
				<li>isalpha()</li>
				<li>isblank()</li>
				<li>iscntrl()</li>
			</ul>
		</td>
		<td>
			<ul>
				<li>isdigit()</li>
				<li>isgraph()</li>
				<li>islower()</li>
				<li>isprint()</li>
			</ul>
		</td>
		<td>
			<ul>
				<li>ispunct()</li>
				<li>isspace()</li>
				<li>isupper()</li>
				<li>isxdigit()</li>
			</ul>
		</td>
		<td>
			<ul>
				<li>tolower()</li>
				<li>toupper()</li>
				<li>isascii()</li>
				<li>toascii()</li>
			</ul>
		</td>
	</tr>
</table>

## Operaciones Matematicas `math.h`
<table>
	<tr>
		<td>
			<ul>
				<li>acos()</li>
			    <li>asin()</li>
			    <li>atan()</li>
			    <li>atan2()</li>
			    <li>ceil()</li>
			    <li>cos()</li>
			</ul>
		</td>
		<td>
			<ul>
			    <li>cosh()</li>
				<li>exp()</li>
			    <li>fabs()</li>
			    <li>floor()</li>
			    <li>fmod()</li>
			    <li>frexp()</li>
			</ul>
		</td>
		<td>
			<ul>
				<li>ldexp()</li>
			    <li>log()</li>
			    <li>log10()</li>
			    <li>modf()</li>
				<li>pow()</li>
			    <li>round()</li>
			</ul>
		</td>
		<td>
			<ul>
				<li>sinh()</li>
			    <li>sqrt()</li>
			    <li>tan()</li>
			    <li>tanh()</li>
			    <li>sin()</li>
			</ul>
		</td>
	</tr>
</table>
 	
## Operaciones de Entrada/Salida`stdio.h`

<table>
	<tr>
		<td>
			<ul>
				<li>fopen()</li>
				<li>freopen()</li>
				<li>fclose()</li>
				<li>fread()</li>
				<li>fwrite()</li>
				<li>fgetc()</li>
				<li>getc()</li>
				<li>fgets()</li>
				<li>fputc()</li>
				<li>fputs()</li>
				<li>remove()</li>
				<li>rename()</li>
			</ul>
		</td>
		<td>
			<ul>
				<li>rewind()</li>
				<li>tmpfile()</li>
				<li>clearerr()</li>
				<li>feof()</li>
				<li>ferror()</li>
				<li>fileno()</li> //Solo para GNU/Linux()</li>
				<li>fflush()</li>
				<li>fgetpos()</li>
				<li>fsetpos()</li>
				<li>ftell()</li>
				<li>fseek()</li>
				<li>perror()</li>
				
			</ul>
		</td>
		<td>
			<ul>
				<li>putc()</li>
				<li>putchar()</li>
				<li>fputchar()</li>
				<li>setbuf()</li>
				<li>setvbuf()</li>
				<li>ungetc()</li>
				<li>puts()</li>
				<li>gets()</li>
				<li>getchar()</li>
				<li>printf()</li>
				<li>fprintf()</li>
				<li>sprintf()</li>
				
			</ul>
		</td>
		<td>
			<ul>
				<li>snprintf()</li>
				<li>scanf()</li> // leer()</li>
				<li>fscanf()</li>
				<li>sscanf()</li>
				<li>vprintf() // imprimir()</li>
				<li>vfprintf()</li>
				<li>vsprintf()</li>
				<li>vsnprintf()</li>
				<li>vscanf()</li>
				<li>vfscanf()</li>
				<li>vsscanf()</li>
			</ul>
		</td>
	</tr>
</table>

## Gestion de Memoria dinámica, tipos y procesos `stdlib.h`

<table>
	<tr>
		<td>
			<ul>
				<li>atof() // valor()</li>
			    <li>strtod()</li>
			    <li>atoi() // entero()</li>
			    <li>atol()</li>
			    <li>strtol()</li>
			</ul>
		</td>
		<td>
			<ul>
				<li>strtoul()</li>
				<li>malloc()</li>
			    <li>calloc()</li>
			    <li>realloc()</li>
			    <li>free()</li>
			</ul>
		</td>
		<td>
			<ul>
				<li>rand()</li>
			    <li>srand()</li>
				<li>abort()</li>
			    <li>exit()</li>
			    <li>getenv()</li>			    
			</ul>
		</td>	
		<td>
			<ul>
				<li>system()</li>
			    <li>abs()</li>
			    <li>labs()</li>
			</ul>
		</td>
	</tr>
</table>

## Funciones con Cadenas de caracteres `string.h`
   
<table>
	<tr>
		<td>
			<ul>
				<li>memcpy()</li>
			    <li>memmove()</li>
			    <li>memchr()</li>
			    <li>memcmp()</li>
			    <li>memset()</li>
			    <li>strcat()</li>
			    <li>strncat()</li>
			</ul>
		</td>
		<td>
			<ul>
			    <li>strchr()</li>
			    <li>strrchr()</li>
			    <li>strcmp()</li>
			    <li>strncmp()</li>
			    <li>strcoll()</li>
			    <li>strcpy()</li>
			    <li>strncpy()</li>
			</ul>
		</td>
		<td>
			<ul>
			    <li>strerror()</li>
			    <li>strlen()</li>
			    <li>strspn()</li>
			    <li>strcspn()</li>
			    <li>strpbrk()</li>
			    <li>strstr()</li>
			    <li>strtok()</li>
			</ul>
		</td>
		<td>
			<ul>
			    <li>strxfrm()</li>
			    <li>strdup()</li>
			</ul>
			    Las siguientes no estan disponibles para Windows
			<ul>
			    <li>index()</li>
			    <li>rindex()</li>
			    <li>strtok_r()</li>
			</ul>
		</td>
	</tr>
</table>

## Funciones 

<table>
<tr>
		<td>
			<ul>
				<li>sctime()</li>
				<li>lock()</li>
				<li>time()</li>
			</ul>
		</td>
		<td>
			<ul>
				<li>ifftime()</li>
				<li>mtime()</li>
				<li>ocaltime()</li>
			</ul>
		</td>
		<td>
			<ul>
				<li>ktime()</li>
				<li>ime() // tiempo()</li>
				<li>trftime()</li>
			</ul>
		</td>
		<td>
			<ul>
				<li>imegm()</li>
				<li>trptime()</li>
				<li>gmtime_r()</li>
			</ul>
		</td>
	</tr>	
</table>




				

				

    
    