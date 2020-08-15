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
			printf("Itaración %u\n", i);
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
				printf("Itaración %u\n", i);
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

