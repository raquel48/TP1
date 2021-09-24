


#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

/// Función principal
int main()
{
  setbuf(stdout,NULL);
  float numeroUno;
  float numeroDos;
  int menu;

  /// Menú de funciones
  do{

	printf("Ingrese el primer operando: \n");
	scanf("%f", &numeroUno);
	printf("Ingrese el segundo operando: \n");
	scanf("%f", &numeroDos);
    printf("\n1.Suma");
    printf("\n2.Resta");
    printf("\n3.Multiplicacion");
    printf("\n4.Division");
    printf("\n5.Factorial");
    printf("\n6.Salir");
    printf("\n\nElija una opcion 1-5: ");
    scanf("%d", &menu);


    switch(menu)
    {
      case 1:
        suma(numeroUno,numeroDos);
        break;
      case 2:
        resta(numeroUno,numeroDos);
        break;
      case 3:
        multiplicacion(numeroUno,numeroDos);
        break;
      case 4:
        division(numeroUno,numeroDos);
        break;
      case 5:
        factorial(numeroUno, numeroDos);
           break;
      case 6:
        printf("¡¡Hasta luego!!");
        exit(0);
      default:
        printf("Opracion invalida\n");
        printf("Por favor ingrese una operacion valida.\n");
    }

  }while(1);
  return EXIT_SUCCESS;
}
