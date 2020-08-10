/*
 * libreria.c
 *
 *  Created on: Aug 10, 2020
 *      Author: IvanMGM
 */


#include <stdio.h>
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
	char strB[80];
	char *pA; /* un apuntador al tipo caracter */
	char *pB; /* otro apuntador al tipo caracter */
	puts(strA);/* muestra la cadena strA */
	pA = strA; /* apunta pA a la cadena strA */
	puts(pA);/* muestra a donde apunta pA */
	pB = strB; /* apunta pB a la cadena strB */

	putchar('\n'); /* dejamos una línea en blanco */

	while(*pA != '\0') {/* linea A (“Mientras el caracter apuntado por pA ( es decir: *pA) no sea un caracter nul (el que es ‘\0’),
haz lo siguiente”) */
		*pB++ = *pA++;/* linea B (“copia el caracter apuntado por pA (es decir *pA) al espacio al que apunta pB, luego incrementa pA de tal manera que apunte al siguiente caracter, de igual modo incrementa pB de manera que apunte al siguiente espacio”) */
	}

	*pB = '\0'; /* linea C (por definición: una cadena en C debe terminar en un caracter nul. Así que agregamos nul con la línea C) */
	puts(strB); /* muestra strB en la pantalla */



}

