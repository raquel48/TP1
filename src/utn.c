/*
 * utn.c
 *
 *  Created on: 23 sep. 2021
 *      Author: raque
 */
#include <stdio.h>
#include <stdlib.h>

/// función para mostrar los numeros
 void mostrar(float numeroUno, float numeroDos, int menu, float result)
 {
  printf("%.2f %c %.2f = %.2f\n", numeroUno, menu, numeroDos, result);
 }

/// función suma de dos numeros
 void suma(float numeroUno, float numeroDos)
 {
  float result = numeroUno + numeroDos;
  printf("El resultado es: ");
  mostrar(numeroUno, numeroDos, '+', result);
 }

/// función resta de dos numeros
 void resta(float numeroUno, float numeroDos)
 {
  float result = numeroUno - numeroDos;
  printf("El resultado es: ");
  mostrar(numeroUno, numeroDos, '-', result);
 }

/// función multiplicacion de dos numeros
 void multiplicacion(float numeroUno, float numeroDos)
{
  float result = numeroUno * numeroDos;
  printf("El resultado es: ");
  mostrar(numeroUno, numeroDos, '*', result);
 }

/// Función division de dos numeros
 void division(float numeroUno, float numeroDos)
 {
  if(numeroDos ==0) {
    printf("¡¡¡No es posible dividir por cero!!!\n");
  }
  else{
	  float result = numeroUno / numeroDos;
	    printf("El resultado es: ");
	    mostrar(numeroUno, numeroDos, '/', result);
  }
 }
 /// función factorial de un numero

int factorial(int numeroUno, int numeroDos)
{

   int i;
   int factorial;
   factorial = 1;
   int result;
   int factorial2;
     factorial2 = 1;


   for (i = 1; i <= numeroUno; i++)
       factorial = factorial * i;



   result = factorial;
   printf("El Factorial de %d es %d\n", numeroUno, result);


      for (i = 1; i <= numeroDos; i++)
          factorial2 = factorial2 * i;

      result = factorial2;
      printf("El Factorial de %d es %d\n", numeroDos, result);

      return 0;
}
