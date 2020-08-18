/*
 * libreria.c
 *
 *  Created on: Aug 10, 2020
 *      Author: IvanMGM
 */


#include <stdio.h>
#include <string.h>
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

		struct ficha{
			char nombre [20];
			char apellido[20];
			char dni[20];
			int edad;
			float salario;
		};


		void programa51 (void){

			int contadorPosicion;

			struct ficha ficha1;
			struct ficha ficha2;
			struct ficha ficha3;

			strcpy(ficha1.nombre,"Jhon");
			strcpy(ficha1.apellido,"Arroba");
			strcpy(ficha1.dni, "54223543A");
			ficha1.edad = 30;
			ficha1.salario= 1050.10;

			strcpy(ficha2.nombre,"Juan");
			strcpy(ficha2.apellido,"Fugter");
			strcpy(ficha2.dni, "26112383P");
			ficha2.edad = 41;
			ficha2.salario= 1075.15;

			strcpy(ficha3.nombre,"Pepe");
			strcpy(ficha3.apellido,"Mitocondria");
			strcpy(ficha3.dni, "34632436V");
			ficha3.edad = 55;
			ficha3.salario= 1100.20;

			struct ficha baseDatosFichas [100];
			baseDatosFichas[0] = ficha1;
			baseDatosFichas[1] = ficha2;
			baseDatosFichas[2] = ficha3;

			contadorPosicion = 3;

			printf( "Nuevo empleado pulse 'n': \n" );
			printf( "Mostar lista de empleados pulse 'l': \n" );
			printf( "Busca empleado por dni pulse 's': \n" );
			printf( "Finalizar pulse 'e': \n" );
			printf( "\n" );
			printf( "Introduzca la opción: " );


			char entradaUsusario1;
			scanf("%c",&entradaUsusario1);
			while (getchar() != '\n');

			printf( "\n" );

			while (entradaUsusario1 != 'e'){

				if(entradaUsusario1== 'n'){

					printf( "\n" );
					printf( "-- Introduzca los datos del nuevo empleado --\n" );
					printf( "\n" );
					printf( "Nombre: " );
					scanf("%[^\n]",&baseDatosFichas[contadorPosicion].nombre);
					printf( "Apellido: " );
					scanf("%s",&baseDatosFichas[contadorPosicion].apellido);
					printf( "DNI: " );
					scanf("%s",&baseDatosFichas[contadorPosicion].dni);
					printf( "Edad: " );
					scanf( "%i", &baseDatosFichas[contadorPosicion].edad );
					printf( "Salario: " );
					scanf( "%f", &baseDatosFichas[contadorPosicion].salario );

					while(getchar()!= '\n');	/* Vacía el buffer de entrada */

					contadorPosicion++;

					printf( "Empleado almacenado con éxito en la base de datos\n" );
					printf( "-------------------------------------------------\n" );
					printf( "\n" );

					printf( "Nuevo empleado pulse 'n': \n" );
					printf( "Mostar lista de empleados pulse 'l': \n" );
					printf( "Busca empleado por dni pulse 's': \n" );
					printf( "Finalizar pulse 'e': \n" );
					printf( "\n" );
					printf( "Introduzca la opción deseada: " );
					scanf("%c",&entradaUsusario1);
					printf( "\n" );
					while(getchar()!= '\n');	/* Vacía el buffer de entrada */

				}else if(entradaUsusario1 == 'l'){
					printf( "\n" );
					printf( "-- Lista con todos los empleados, en total hay %i empleados en plantilla --\n",contadorPosicion+1 );
					printf( "\n" );
					int i;
					for( i=0; i<contadorPosicion; i++ ) {
							printf( "\n" );
							printf( "Empleado %i \n ", i+1 );
							printf( "\n" );
							printf( "  Nombre:    %s \n ", baseDatosFichas[i].nombre );
							printf( " Apellido:  %s \n ", baseDatosFichas[i].apellido );
							printf( " DNI:       %s \n", baseDatosFichas[i].dni );
							printf( "  Edad:      %i\n" ,baseDatosFichas[i].edad );
							printf( "  Salario:   %f\n" ,baseDatosFichas[i].salario );
							printf( "--------------------------------------------\n" );
							printf( "\n" );
					}

					printf( "--FIN LISTA EMPLEADOS --\n" );
					printf( "---------------------------------------------------\n" );
					printf( "\n" );

					printf( "Nuevo empleado pulse 'n': \n" );
					printf( "Mostar lista de empleados pulse 'l': \n" );
					printf( "Busca empleado por dni pulse 's': \n" );
					printf( "Finalizar pulse 'e': \n" );
					printf( "\n" );
					printf( "Introduzca la opción deseada: " );
					scanf("%c",&entradaUsusario1);
					printf( "\n" );
					while(getchar()!= '\n');	/* Vacía el buffer de entrada */

				}else if(entradaUsusario1=='s'){
					printf( "\n" );
					printf( "-- Búsqueda de un empleado por número de DNI --\n",contadorPosicion+1 );
					printf( "\n" );

					char auxDNI[20];
					printf( "Introduzca el DNI del empleado que desea buscar: " );
					scanf("%s",&auxDNI);
					while(getchar()!= '\n');
					printf( "\n" );

					int i;
					int encontrado= 0; // 0 = FALSE, 1=TRUE
					int posicionEncontrado;
					for( i=0; i<contadorPosicion; i++ ) {
						if(encontrado ==0){
							if(strcmp(auxDNI,baseDatosFichas[i].dni)==0){
								encontrado = 1;
								posicionEncontrado = i;
							}
						}

					}

					if(encontrado == 0){
						printf( "No hay ningún empleado con el número de DNI %s almacenado en la Base de Datos \n ", auxDNI );
						printf( "\n" );
						printf( "---------------------------------------------------------------------------------\n" );

					}else{
						printf( "Empleado encontrado. A continuación se muestra la ficha del empleado con número de DNI %s \n ", auxDNI );
						printf( "\n" );
						printf( "Empleado almacenado en la posicón %i de la Base de Datos \n ", posicionEncontrado );
						printf( "\n" );
						printf( "  Nombre:    %s \n ", baseDatosFichas[posicionEncontrado].nombre );
						printf( " Apellido:  %s \n ", baseDatosFichas[posicionEncontrado].apellido );
						printf( " DNI:       %s \n", baseDatosFichas[posicionEncontrado].dni );
						printf( "  Edad:      %i\n" ,baseDatosFichas[posicionEncontrado].edad );
						printf( "  Salario:   %f\n" ,baseDatosFichas[posicionEncontrado].salario );
						printf( "--------------------------------------------\n" );
						printf( "\n" );

						printf( "Para borrar al empleado de la base de datos pulse 'r' \n" );
						printf( "Para modificar algún dato del empleado pulse 'm' \n" );
						printf( "Para salir pulse 'e' \n" );
						printf( "\n" );
						printf( "Introduzca la opción deseada: ");
						char entradaUsusario2;
						scanf("%c",&entradaUsusario2);
						while(getchar()!= '\n');
						printf( "\n" );
						printf( "\n" );


						while (entradaUsusario2 != 'e'){



							 if (entradaUsusario2 == 'r'){

								struct ficha auxBaseDatos[100];


								int j;
								int k=0;
								for( j=posicionEncontrado; j<contadorPosicion-1; j++ ) {

										baseDatosFichas[j]=baseDatosFichas[j+1];

								}
								baseDatosFichas[contadorPosicion-1]=baseDatosFichas[contadorPosicion];

								contadorPosicion--;

								printf( "\n" );
								printf( "El empleado con número de DNI %s ha sido borrado de la Base de Datos ", auxDNI );
								printf( "\n" );
								printf( "-----------------------------------------------------\n" );
								printf( "\n" );
								entradaUsusario2 ='e';

							}else if (entradaUsusario2 == 'm'){
								printf( "  Para modificar el nombre pulse   'n' \n" );
								printf( "  Para modificar el apellido pulse 's' \n" );
								printf( "  Para modificar el dni pulse      'i' \n" );
								printf( "  Para modificar el edad pulse     'a' \n" );
								printf( "  Para modificar el salario pulse  'm' \n" );
								printf( "  Para salir pulse                 'e' \n" );
								printf( "\n" );
								printf( "  Introduzca la opción deseada: " );
								char entradaUsusario3;
								scanf("%c",&entradaUsusario3);
								while(getchar()!= '\n');
								printf( "\n" );

								if(entradaUsusario3=='e'){
									entradaUsusario2 = 'e';
								}

								while (entradaUsusario3 != 'e'){
									if(entradaUsusario3=='n'){
										printf( "\n" );
										printf( "El nombre actual del empleado con número de DNI %s es %s \n",auxDNI,baseDatosFichas[posicionEncontrado].nombre );
										printf( "\n" );
										printf( "Introduzca el nuevo nombre: ");
										char entradaUsuario4[20];
										scanf("%[^\n]",&entradaUsuario4);
										while(getchar()!= '\n');
										printf( "\n" );
										printf( "\n" );
										printf( "El nuevo nombre introducido es: %s \n ",entradaUsuario4 );
										printf( " Pulse 'y' para guardad  \n" );
										printf( " Pulse 'n' para no guardar y volver atrás  \n" );
										printf( " Pulse 'e' para salir sin guardar  \n" );
										printf( "\n" );
										printf( " Introduzca su selección: " );
										char entradaUsuario5;
										scanf("%c",&entradaUsuario5);
										while(getchar()!= '\n');
										printf( "\n" );
										printf( "\n" );

										if(entradaUsuario5 == 'y'){
											strcpy(baseDatosFichas[posicionEncontrado].nombre, entradaUsuario4);
											printf( "\n" );
											printf( "La ficha ha sido modificada con éxito" );
											printf( "\n" );
											printf( "   Nombre:   %s \n ", baseDatosFichas[posicionEncontrado].nombre );
											printf( "  Apellido: %s \n ", baseDatosFichas[posicionEncontrado].apellido );
											printf( "  DNI:      %s \n", baseDatosFichas[posicionEncontrado].dni );
											printf( "   Edad:      %i\n" ,baseDatosFichas[posicionEncontrado].edad );
											printf( "   Salario:   %f\n" ,baseDatosFichas[posicionEncontrado].salario );
											printf( "--------------------------------------------\n" );
											printf( "\n" );
											entradaUsusario3='e';
											entradaUsusario2 = 'e';

										}else if (entradaUsuario5 == 'n'){


										}else if (entradaUsuario5 == 'e'){
											entradaUsusario3='e';
											entradaUsusario2 = 'e';

										}else{
											printf( "\n" );
											printf( "ERROR: la opción seleccionada no está disponible. Por favor inténtelo de nuevo. \n" );
											printf( "----------\n" );
											printf( "El nombre actual del empleado con número de DNI %s es %s \n",auxDNI,baseDatosFichas[posicionEncontrado].nombre );
											printf( "Introoduzca el nuevo nombre: ");
											scanf("%[^\n]",&entradaUsuario4);
											while(getchar()!= '\n');
											printf( "\n" );
											printf( "\n" );
										}


									}else if (entradaUsusario3=='s'){
										printf( "\n" );
										printf( "El apellido actual del empleado con número de DNI %s es %s \n",auxDNI,baseDatosFichas[posicionEncontrado].apellido );
										printf( "\n" );
										printf( "Introoduzca el nuevo apellido: ");
										char entradaUsuario4[20];
										scanf("%s",&entradaUsuario4);
										while(getchar()!= '\n');
										printf( "\n" );
										printf( "\n" );
										printf( "El nuevo apellido introducido es: %s \n ",entradaUsuario4 );
										printf( "Pulse 'y' para guardad\n " );
										printf( "Pulse 'n' para guardad\n  " );
										printf( "Pulse 'e' para salir sin guardad\n  " );
										printf( "Introduzca su selección: : " );
										char entradaUsuario5;
										scanf("%c",&entradaUsuario5);
										while(getchar()!= '\n');
										printf( "\n" );

										if(entradaUsuario5 == 'y'){
											strcpy(baseDatosFichas[posicionEncontrado].apellido, entradaUsuario4);
											printf( "\n" );
											printf( "La ficha ha sido modificada con éxito" );
											printf( "\n" );
											printf( "  Nombre: %s \n ", baseDatosFichas[posicionEncontrado].nombre );
											printf( "  Apellido: %s \n ", baseDatosFichas[posicionEncontrado].apellido );
											printf( "  DNI: %s \n", baseDatosFichas[posicionEncontrado].dni );
											printf( "  Edad: %i\n" ,baseDatosFichas[posicionEncontrado].edad );
											printf( "  Salario: %f\n" ,baseDatosFichas[posicionEncontrado].salario );
											printf( "--------------------------------------------\n" );
											printf( "\n" );
											entradaUsusario3='e';
											entradaUsusario2 = 'e';

										}else if (entradaUsuario5 == 'n'){


										}else if (entradaUsuario5 == 'e'){
											entradaUsusario3='e';
											entradaUsusario2 = 'e';

										}else{
											printf( "\n" );
											printf( "ERROR: la opción seleccionada no está disponible. Por favor inténtelo de nuevo. \n" );
											printf( "----------\n" );
											printf( "El apellido actual del empleado con número de DNI %s es %s \n",auxDNI,baseDatosFichas[posicionEncontrado].apellido );
											printf( "Introoduzca el nuevo apellido: ");
											scanf("%s",&entradaUsuario4);
											while(getchar()!= '\n');
											printf( "\n" );
										}

									}else if(entradaUsusario3=='i'){
										printf( "\n" );
																				printf( "El DNI actual del empleado con número de DNI %s es %s \n",auxDNI,baseDatosFichas[posicionEncontrado].dni );
																				printf( "Introoduzca el nuevo DNI: ");
																				char entradaUsuario4[20];
																				scanf("%s",&entradaUsuario4);
																				while(getchar()!= '\n');
																				printf( "\n" );
																				printf( "El nuevo DNI introducido es: %s\n",entradaUsuario4 );
																				printf( "Pulse 'y' para guardad\n" );
																				printf( "Pulse 'n' para guardad\n" );
																				printf( "Pulse 'e' para salir sin guardad\n" );
																				printf( "Introduzca su selección: : " );
																				char entradaUsuario5;
																				scanf("%c",&entradaUsuario5);
																				while(getchar()!= '\n');
																				printf( "\n" );

																				if(entradaUsuario5 == 'y'){
																					strcpy(baseDatosFichas[posicionEncontrado].dni, entradaUsuario4);
																					printf( "\n" );
																					printf( "La ficha ha sido modificada con éxito" );
																					printf( "\n" );
																					printf( "  Nombre: %s \n ", baseDatosFichas[posicionEncontrado].nombre );
																					printf( "  Apellido: %s \n ", baseDatosFichas[posicionEncontrado].apellido );
																					printf( "  DNI: %s \n", baseDatosFichas[posicionEncontrado].dni );
																					printf( "  Edad: %i\n" ,baseDatosFichas[posicionEncontrado].edad );
																					printf( "  Salario: %f\n" ,baseDatosFichas[posicionEncontrado].salario );
																					printf( "--------------------------------------------\n" );
																					printf( "\n" );
																					entradaUsusario3='e';
																					entradaUsusario2 = 'e';

																				}else if (entradaUsuario5 == 'n'){


																				}else if (entradaUsuario5 == 'e'){
																					entradaUsusario3='e';
																					entradaUsusario2 = 'e';

																				}else{
																					printf( "\n" );
																					printf( "ERROR: la opción seleccionada no está disponible. Por favor inténtelo de nuevo. \n" );
																					printf( "----------\n" );
																					printf( "El dni actual del empleado con número de DNI %s es %s \n",auxDNI,baseDatosFichas[posicionEncontrado].dni );
																					printf( "Introoduzca el nuevo DNI: ");
																					scanf("%s",&entradaUsuario4);
																					while(getchar()!= '\n');
																					printf( "\n" );
																				}

									}else if (entradaUsusario3=='a'){
										printf( "\n" );
																				printf( "La edad actual del empleado con número de DNI %s es %i \n",auxDNI,baseDatosFichas[posicionEncontrado].edad );
																				printf( "Introoduzca la nueva edad: ");
																				int entradaUsuario4;
																				scanf( "%i", &entradaUsuario4 );
																				while(getchar()!= '\n');

																				printf( "\n" );
																				printf( "La nueva edad introducido es: %i \n ",entradaUsuario4 );
																				printf( "Pulse 'y' para guardad\n  " );
																				printf( "Pulse 'n' para guardad\n  " );
																				printf( "Pulse 'e' para salir sin guardad\n  " );
																				printf( "Introduzca su selección: " );
																				char entradaUsuario5;
																				scanf("%c",&entradaUsuario5);
																				while(getchar()!= '\n');
																				printf( "\n" );

																				if(entradaUsuario5 == 'y'){
																					baseDatosFichas[posicionEncontrado].edad = entradaUsuario4;
																					printf( "\n" );
																					printf( "La ficha ha sido modificada con éxito" );
																					printf( "\n" );
																					printf( "  Nombre: %s \n ", baseDatosFichas[posicionEncontrado].nombre );
																					printf( "  Apellido: %s \n ", baseDatosFichas[posicionEncontrado].apellido );
																					printf( "  DNI: %s \n", baseDatosFichas[posicionEncontrado].dni );
																					printf( "  Edad: %i\n" ,baseDatosFichas[posicionEncontrado].edad );
																					printf( "  Salario: %f\n" ,baseDatosFichas[posicionEncontrado].salario );
																					printf( "--------------------------------------------\n" );
																					printf( "\n" );
																					entradaUsusario3='e';
																					entradaUsusario2 = 'e';

																				}else if (entradaUsuario5 == 'n'){


																				}else if (entradaUsuario5 == 'e'){
																					entradaUsusario3='e';
																					entradaUsusario2 = 'e';

																				}else{
																					printf( "\n" );
																					printf( "ERROR: la opción seleccionada no está disponible. Por favor inténtelo de nuevo. \n" );
																					printf( "----------\n" );
																					printf( "La edad actual del empleado con número de DNI %s es %i \n",auxDNI,baseDatosFichas[posicionEncontrado].edad );
																					printf( "Introoduzca la nueva edad: ");
																					scanf( "%i", &entradaUsuario4 );
																					while(getchar()!= '\n');
																					printf( "\n" );
																				}



									}else if(entradaUsusario3=='m'){
										printf( "\n" );
																				printf( "El salario actual del empleado con número de DNI %s es %f€ \n",auxDNI,baseDatosFichas[posicionEncontrado].salario );
																				printf( "Introoduzca el nuevo salario: ");
																				float entradaUsuario4;
																				scanf( "%f", &entradaUsuario4 );
																				while(getchar()!= '\n');
																				printf( "\n" );
																				printf( "El nuevo salario introducido es: %f\n  ",entradaUsuario4 );
																				printf( "Pulse 'y' para guardad\n " );
																				printf( "Pulse 'n' para guardad\n  " );
																				printf( "Pulse 'e' para salir sin guardad\n  " );
																				printf( "Introduzca su selección: : " );
																				char entradaUsuario5;
																				scanf("%s",&entradaUsuario5);
																				while(getchar()!= '\n');
																				printf( "\n" );

																				if(entradaUsuario5 == 'y'){
																					baseDatosFichas[posicionEncontrado].salario = entradaUsuario4;
																					printf( "\n" );
																					printf( "La ficha ha sido modificada con éxito" );
																					printf( "\n" );
																					printf( "  Nombre: %s \n ", baseDatosFichas[posicionEncontrado].nombre );
																					printf( "  Apellido: %s \n ", baseDatosFichas[posicionEncontrado].apellido );
																					printf( "  DNI: %s \n", baseDatosFichas[posicionEncontrado].dni );
																					printf( "  Edad: %i\n" ,baseDatosFichas[posicionEncontrado].edad );
																					printf( "  Salario: %f\n" ,baseDatosFichas[posicionEncontrado].salario );
																					printf( "--------------------------------------------\n" );
																					printf( "\n" );
																					entradaUsusario3='e';
																					entradaUsusario2 = 'e';

																				}else if (entradaUsuario5 == 'n'){


																				}else if (entradaUsuario5 == 'e'){
																					entradaUsusario3='e';
																					entradaUsusario2 = 'e';

																				}else{
																					printf( "\n" );
																					printf( "ERROR: la opción seleccionada no está disponible. Por favor inténtelo de nuevo. \n" );
																					printf( "----------\n" );
																					printf( "El salario actual del empleado con número de DNI %s es %s \n",auxDNI,baseDatosFichas[posicionEncontrado].salario );
																					printf( "Introoduzca el nuevo salario: ");
																					scanf( "%f", &entradaUsuario4 );
																					while(getchar()!= '\n');
																					printf( "\n" );
																				}





									}else{
										printf( "ERROR: la opción seleccionada no está disponible. Por favor inténtelo de nuevo. \n" );
										printf( "----------\n" );
										printf( "Para modificar el nombre pulse 'n' \n" );
										printf( "Para modificar el apellido pulse 's' \n" );
										printf( "Para modificar el dni pulse  'i' \n" );
										printf( "Para modificar el edad pulse  'a' \n" );
										printf( "Para modificar el salario pulse  'm' \n" );
										printf( "Para salir pulse pulse  'e' \n" );
										printf( "\n" );
										printf( "Introduzca la opción deseada: " );
										scanf( "%c", &entradaUsusario3);
										while(getchar()!= '\n');
										printf( "\n" );
									}
								}


							}else{
								printf( "ERROR: la opción seleccionada no está disponible. Por favor inténtelo de nuevo. \n" );
								printf( "----------\n" );
								printf( "Para borrar al empleado de la base de datos pulse 'r' \n" );
								printf( "Para modificar algún dato del empleado pulse 'm' \n" );
								printf( "Para salir pulse 'e' \n" );
								printf( "\n" );
								printf( "Introduzca la opción deseada: " );
								scanf( "%c", &entradaUsusario2);
								while(getchar()!= '\n');
								printf( "\n" );

							}






						}




					}

					printf( " Nuevo empleado pulse 'n': \n" );
					printf( " Mostar lista de empleados pulse 'l': \n" );
					printf( " Busca empleado por dni pulse 's': \n" );
					printf( " Finalizar pulse 'e': \n" );
					printf( "\n" );
					printf( " Introduzca la opción deseada: " );
					scanf("%c",&entradaUsusario1);
					printf( "\n" );
					while(getchar()!= '\n');	/* Vacía el buffer de entrada */



				}else{
					printf( "ERROR: la opción seleccionada no está disponible. Por favor inténtelo de nuevo1. \n" );
					printf( "----------\n" );
					printf( "\n" );
					printf( "Nuevo empleado pulse 'n': \n" );
					printf( "Mostar lista de empleados pulse 'l': \n" );
					printf( "Busca empleado por dni pulse 's': \n" );
					printf( "Finalizar pulse 'e': \n" );
					printf( "\n" );
					printf( "Introduzca la opción deseada: " );
					scanf("%c",&entradaUsusario1);
					while(getchar()!= '\n');	/* Vacía el buffer de entrada */
					printf( "\n" );

				}



			}

			printf( "FIN PROGRAMA Bye bye :) " );

		}





