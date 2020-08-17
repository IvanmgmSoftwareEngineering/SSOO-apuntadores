/*
 * libreria.c
 *
 *  Created on: Aug 10, 2020
 *      Author: IvanMGM
 */


#include <stdio.h>
#include "libreria.h"
void ejemplo1 (void){

    //Ejemplo 1: muestra el tamaño de las variables
printf("El tamaño de short (entero corto), es: %d bytes \n" , sizeof(short));
printf("El tamaño de int (entero), es:         %d bytes\n", sizeof(int));
printf("El tamaño de long (entero largo), es:  %d bytes\n", sizeof(long));

//Ejemplo 2: Variables de tipo apuntador

int i = 2;

printf("El valor de la variable i, es: %d \n" , i);

int *apuntador; //con el * estamos indicando que en la variable apuntador queremos almacenar una dirección de memoria asociada a un entero

printf("El valor de la variable apuntador antes de ser asiganada es: %p \n" ,(void *)&apuntador);

apuntador = &i;

printf("El valor de la variable apuntador después de ser asiganada es: %p \n" , (void *)&apuntador);

*apuntador = 7;

printf("El valor de la variable i despues de utilizar un apuntador para cambiar su valor, es: %d \n" , i);
}

void programa11 (void)
{
int j, k;
int *ptr;
j = 1;
k = 2;
ptr = &k;
printf("\n");
printf("j tiene el valor: %d y esta alojado en: %p\n", j, (void *)&j);
printf("k tiene el valor: %d y esta alojado en: %p\n", k, (void *)&k);
printf("ptr tiene el valor: %p y esta alojado en: %p\n", ptr, (void *)&ptr);
printf("El valor del entero al que apunta ptr es: %d\n", *ptr);
}

void programa21(void)
{
int mi_arreglo[] = {1,23,17,4,-5,100};
int *ptr;
int i;
ptr = &mi_arreglo[0]; /* apuntamos nuestro puntero
al primer elemento del arreglo*/
printf("\n\n");
for (i = 0; i < 6; i++)
{
//printf("mi_arreglo[%d]   = %d      <-- A \n", i, mi_arreglo[i]); /*<-- A */
//printf("ptr + %d         = %d      <-- B \n",i, *(ptr + i)); /*<-- B */
//printf("ptr + %d         = %d      <-- C \n", i, *ptr++); /*<-- C */
printf("ptr + %d         = %d     <-- D \n", i, *(++ptr)); /*<-- D */
}
}

void programa31(void)
{
	char strA[80] = "Cadena a usar para el programa de ejemplo";
	char strB[80] = "12345678901234567890123456789012345678901234567890";
	char *pA; /* un apuntador al tipo caracter */
	char *pB; /* otro apuntador al tipo caracter */
	char i,j;

	putchar('\n'); /* dejamos una línea en blanco */
	printf("----INICIO----");
	putchar('\n'); /* dejamos una línea en blanco */

	printf("inicio) Mostrando lo que tiene la cadena strA:                    ");
	puts(strA);/* muestra la cadena strA */
	pA = strA; /* apunta pA a la cadena strA */
	printf("inicio) Mostrando el contenido de a donde apunta el apuntador pA: ");
	puts(pA);/* muestra el contenido de a donde apunta pA */
	printf("inicio) Mostrando a donde apunta el apuntador pA:                 ");
	printf("%p\n",(void *)pA);/* muestra a donde apunta pA */

	putchar('\n'); /* dejamos una línea en blanco */

	printf("inicio) Mostrando lo que tiene la cadena strB al principio:       ");
	puts(strB);/* muestra la cadena strA */
	pB = strB; /* apunta pB a la cadena strB */
	printf("inicio) Mostrando el contenido de a donde apunta el apuntador pB: ");
	puts(pB);/* muestra el contenido de a donde apunta pB */
	printf("inicio) Mostrando a donde apunta el apuntador pB:                 ");
	printf("%p\n",(void *)pB);/* muestra a donde apunta pB */


	putchar('\n'); /* dejamos una línea en blanco */
	printf(" BUCLE) Mostrando a donde apunta el apuntador pA y pB durante el bucle:                 ");
	putchar('\n'); /* dejamos una línea en blanco */


	i = 0;
	while(*pA != '\0') {// linea A (“Mientras el caracter apuntado por pA ( es decir: *pA) no sea un caracter nul (el que es ‘\0’),haz lo siguiente”)
		*pB++ = *pA++;// linea B (“copia el caracter apuntado por pA (es decir *pA) al espacio al que apunta pB, luego incrementa pA de tal manera que apunte al siguiente caracter, de igual modo incrementa pB de manera que apunte al siguiente espacio”)
		printf("Iteración %d \n",i+1);
				printf("-- pA apunta a la dirección de memoria: %p \n",(void *)pA);
				printf("-- en la dirección a la que apunta pA está almacenado el valor: %c \n",*pA);
				printf("-- pB apunta a la dirección de memoria %p \n",(void *)pB);
				printf("-- en la dirección a la que apunta pB está almacenado el valor: %c \n",*pB);
		i++;
	}

	*pB = '\0'; // linea C (por definición: una cadena en C debe terminar en un caracter nul. Así que agregamos nul con la línea C)



/*

	j=0;
	while(strA[j] != '\0'){
		strB[j]=strA[j];
		printf("Iteración %d \n",j+1);
		printf("-- strA[%d] apunta a la dirección de memoria %p \n",j+1,(void *)&strA[j]);
		printf("-- strA[%d] = %c \n",j+1,strA[j]);
		printf("-- strB[%d] apunta a la dirección de memoria %p \n",j+1,(void *)&strB[j]);
		printf("-- strB[%d] = %c \n",j+1,strB[j]);
		j++;
	}

	strB[j]='\0';

*/




	putchar('\n'); /* dejamos una línea en blanco */
	printf("----FINAL----");
	putchar('\n'); /* dejamos una línea en blanco */

	printf(" final) Mostrando lo que tiene la cadena strA:                    ");
	puts(strA);/* muestra la cadena strA */
	printf(" final) Mostrando el contenido de a donde apunta el apuntador pA: ");
	puts(pA);/* muestra el contenido de a donde apunta pA */
	printf(" final) Mostrando a donde apunta el apuntador pA:                 ");
	printf("%p\n",(void *)pA);/* muestra a donde apunta pA */

	putchar('\n'); /* dejamos una línea en blanco */

	printf(" final) Mostrando lo que tiene la cadena strB:                    ");
	puts(strB); /* muestra strB en la pantalla */
	printf(" final) Mostrando el contenido de a donde apunta el apuntador pB: ");
	puts(pB);/* muestra el contenido de a donde apunta pB */
	printf(" final) Mostrando a donde apunta el apuntador pB:                 ");
	printf("%p\n",(void *)pB);/* muestra a donde apunta pB */



}



	char *mi_strcpy1 (const char *fuente, char *destino)
	{
		printf("\n");
		printf("Función mi_strcopy1\n");
		printf("\n");
		int i = 1;
		char *p = destino;
		while (*fuente != '\0'){
			printf("Iteración %u\n", i);
			printf("\n");
			printf("-- Mostrando donde apunta el apuntador p: \n");
			printf("     Dirección: %p     Contenido: %c\n",(void *)p, *p);/* muestra a donde apunta p */
			printf("\n");
			printf("-- Mostrando donde apunta el apuntador destino y su contenido: \n");
			printf("     Dirección: %p     Contenido: %c\n",(void *)destino,*destino);/* muestra a donde apunta destino y su contenido */
			printf("\n");
			printf("-- Mostrando donde apunta el apuntador fuente: \n");
			printf("     Dirección: %p     Contenido: %c\n",(void *)fuente,*fuente);/* muestra a donde apunta fuente y su contendio */
			printf("\n");

			*p++ = *fuente++;
			i++;
		}
		*p = '\0';
		return destino;
	}

	char *mi_strcpy2 (const char *fuente, char *destino)
		{
			printf("\n");
			printf("Función mi_strcopy2\n");
			printf("\n");
			int i = 1;
			while (*fuente != '\0'){
				printf("Iteración %u\n", i);
				printf("\n");
				printf("\n");
				printf("-- Mostrando donde apunta el apuntador destino y su contenido: \n");
				printf("     Dirección: %p     Contenido: %c\n",(void *)destino,*destino);/* muestra a donde apunta destino y su contenido */
				printf("\n");
				printf("-- Mostrando donde apunta el apuntador fuente: \n");
				printf("     Dirección: %p     Contenido: %c\n",(void *)fuente,*fuente);/* muestra a donde apunta fuente y su contendio */
				printf("\n");
				*destino++ = *fuente++;

				i++;
			}
			*destino = '\0';
			return destino;
		}


	void programa32 (void){

		char fuentePrueba [80] = "0123456789";
		char destinoPrueba1 [80];
		char destinoPrueba2 [80];
		char destinoPrueba3 [80];
		mi_strcpy1(fuentePrueba,destinoPrueba1);
		puts(destinoPrueba1);
		mi_strcpy1(fuentePrueba,destinoPrueba2);
		puts(destinoPrueba2);
		mi_strcpy1(fuentePrueba,destinoPrueba3);
		puts(destinoPrueba3);
	}

	void programa33 (void){

			char fuentePrueba [80] = "0123456789";
			char destinoPrueba1 [80];
			char destinoPrueba2 [80];
			char destinoPrueba3 [80];
			mi_strcpy2(fuentePrueba,destinoPrueba1);
			puts(destinoPrueba1);
			mi_strcpy2(fuentePrueba,destinoPrueba2);
			puts(destinoPrueba2);
			mi_strcpy2(fuentePrueba,destinoPrueba3);
			puts(destinoPrueba3);
		}

	int *int_copy1 (const int *fuente, int *destino, int nbr){
		printf("\n");
		printf("Función int_copy1\n");
		printf("\n");
		int i = 1;
		while (i<nbr){
			*destino++ = *fuente++;
			i++;
		}
		return destino;
	}

	int *int_copy2 (const int *fuente, int *destino){
			printf("\n");
			printf("Función int_copy2\n");
			printf("\n");
			int i = 1;
			while (*fuente != -1){
				printf("Iteración %u\n", i);
				printf("\n");
				printf("\n");
				printf("-- Mostrando donde apunta el apuntador destino y su contenido: \n");
				printf("     Dirección: %p     Contenido: %u\n",(void *)destino,*destino);/* muestra a donde apunta destino y su contenido */
				printf("\n");
				printf("-- Mostrando donde apunta el apuntador fuente: \n");
				printf("     Dirección: %p     Contenido: %u\n",(void *)fuente,*fuente);/* muestra a donde apunta fuente y su contendio */
				printf("\n");
				*destino++ = *fuente++;
				i++;
			}
			*destino = -1;
			return destino;
		}

	void programa34 (void){


	}

	void programa35 (void){
		int fuentePrueba [80] = {1,2,3,4,-1};
		int destinoPrueba [80];
		int_copy2(fuentePrueba, destinoPrueba);
		int *apuntador = destinoPrueba;
		while(*apuntador != -1){
			printf("%u, ", *apuntador);
			*apuntador++;

		}
	}

	void programa41 (void){

		long arreglo [80];
		arreglo[3]= 2;
		printf("%ld\n",arreglo[3]);
		printf("%ld\n",3[arreglo]);

	}

	int my_strlen(const char *fuente){
		int len;

		len = 0;

		while(*fuente++ != '\0'){
			len++;
		}


		return len;
	}

	void programa42(void){

		char fuente1 [80]= "12345";
		char fuente2 [80];
		printf("El tamaño del arreglo fuente1 cuando lo hemos inicializado a 12345: %u\n",my_strlen(fuente1));
		printf("El tamaño del arreglo fuente2 solo lo hemos declarado con un espacio 80: %u\n",my_strlen(fuente2));

	}

	char *my_strcat(const char *fuente1,const char *fuente2, char *resultado){
		//Concatena la cadena fuente1 y la cadena fuente2 en ese oreden


			while(*fuente1 != '\0'){
				*resultado++=*fuente1++;
			}
			while(*fuente2 != '\0'){
				*resultado++=*fuente2++;
			}
			*resultado = '\0';


			return resultado;
		}

		void programa43(void){

			char fuente1 [80]= "01234";
			char fuente2 [80]= "56789";
			char resultado [80];
			my_strcat(fuente1,fuente2, resultado);
			puts(resultado);
		}

		int my_strchr1(const char *fuente1, const char caracterBuscado){

					int posicion = NULL;
					int contador = 0;


					while(*fuente1 != '\0'){
						if(*fuente1 == caracterBuscado){
							posicion = contador;
							return posicion;
						}
						contador++;
						*fuente1++;
					}


					return posicion;
				}

		void programa44(void){

			char fuente1 [80]= "Hello world";
			char caracterBuscado = 'o';
			int posicion;
			printf("el valor de posicion es: %u\n",posicion);
			char resultado [80];
			posicion = my_strchr1(fuente1, caracterBuscado);
			printf("el valor de posicion es: %u\n",posicion);
			printf("La posición del caracter -%c- dentro de la cadena -%s- es: %u\n",caracterBuscado,fuente1,posicion);
		}

		const char *my_strchr2(const char *fuente1, int caracterBuscado){

							char *posicion = NULL;
							int contador = 0;
							posicion = fuente1;


							while(*posicion != '\0'){
								if(*posicion == (char)caracterBuscado){
									return posicion;
								}
								contador++;
								*posicion++;
							}


							return posicion;
						}

		void programa45(void){

				char fuente1 [80]= "Hello world";
				char caracterBuscado = 'o';
				char *apuntador;
				char resultado [80];
				apuntador = my_strchr2(fuente1, caracterBuscado);
				printf("la direccion de fuente1[0] es: %p\n",(void*)fuente1);
				printf("el contenifo de fuente1]0] de fuente1[0] es: %c\n",*fuente1);
				printf("la direccion de apuntador es: %p\n",(void*)apuntador);
				printf("el contenifo de apuntador es: %c\n",*apuntador);

				if(apuntador == NULL){

					printf("El caracter -%c- dentro de la cadena -%s- no ha sido encontrado: %p \n",caracterBuscado,fuente1,apuntador);

				}else{

					printf("La posición del caracter -%c- dentro de la cadena -%s- es: %u\n",caracterBuscado,fuente1,apuntador - fuente1);
					printf("La subcadena a partir del caracter encontrado -%c- es: %s\n",caracterBuscado,apuntador);


				}

		}




