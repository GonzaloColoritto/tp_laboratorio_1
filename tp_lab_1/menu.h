#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/** Funcion que muestra el menu de opciones de una calculadora y muestra los dos numeros ingresados.
 *
 * numUno es el primer numero ingresado por el usuario.
 * numDos es el segundo numero ingresado por el usuario.
 *
 *
 */

int menuCalculadora (int numUno,int numDos)
{

    system("cls");
    system("COLOR 09");
    printf("                      |CALCULADORA|\n\n");
    printf("                    -MENU DE OPCIONES-                                \n");
    printf("    .________________________________________________.\n");
    printf("    | Para ingresar su primer numero ingrese-> ->[1] |\n");
    printf("    | Para ingresar su segundo numero ingrese  ->[2] |\n");
    printf("    | Para calcular los resultados ingrese  -> ->[3] |\n");
    printf("    | Para mostrar los resultados ingrese-> -> ->[4] |\n");
    printf("    | Para salir ingrese ->  ->  ->  ->  -> -> ->[5] |\n");
    printf("    ''''''''''''''''''''''''''''''''''''''''''''''''''\n");
    printf("           Los numeros ingresados son: A=%d B=%d \n\n",numUno,numDos);

return 0;


}
/** Funcion que le pide al usuario un numero y lo guarda en una variable.
 *
 *
 *
 * retorna ese numero ingresado.
 *
 */

 unsigned int ingreseOpcion(void)
{
    int opcion;
    printf("                  INGRESE UNA OPCION: ");
    scanf("%d",&opcion);


    return opcion;
}

/** Funcion que muestra el menu de una calculadora y el primer numero ingresado por el usuario.
 *
 * numUno es el numero ingresado por el usuario.
 *
 *
 *
 */

int menuCalculadoraX (int numUno)
{

    system("cls");
    system("COLOR 09");
    printf("                      |CALCULADORA|\n\n");
    printf("                    -MENU DE OPCIONES-                                \n");
    printf("    .________________________________________________.\n");
    printf("    | Para ingresar su primer numero ingrese-> ->[1] |\n");
    printf("    | Para ingresar su segundo numero ingrese  ->[2] |\n");
    printf("    | Para calcular los resultados ingrese  -> ->[3] |\n");
    printf("    | Para mostrar los resultados ingrese-> -> ->[4] |\n");
    printf("    | Para salir ingrese ->  ->  ->  ->  -> -> ->[5] |\n");
    printf("    ''''''''''''''''''''''''''''''''''''''''''''''''''\n");
    printf("           Los numeros ingresados son: A=%d B=y \n\n",numUno);
    return 0;
}
/** Funcion que unicamente muestra el menu de una calculadora.
 *
 *
 */
unsigned int menuCalculadoraVacio()
{


    system("cls");
    system("COLOR 09");
    printf("                      |CALCULADORA|\n\n");
    printf("                    -MENU DE OPCIONES-                                \n");
    printf("    .________________________________________________.\n");
    printf("    | Para ingresar su primer numero ingrese-> ->[1] |\n");
    printf("    | Para ingresar su segundo numero ingrese  ->[2] |\n");
    printf("    | Para calcular los resultados ingrese  -> ->[3] |\n");
    printf("    | Para mostrar los resultados ingrese-> -> ->[4] |\n");
    printf("    | Para salir ingrese ->  ->  ->  ->  -> -> ->[5] |\n");
    printf("    ''''''''''''''''''''''''''''''''''''''''''''''''''\n");
    printf("           Los numeros ingresados son: A=x B=y \n\n");
    return 0;
}


#endif // MENU_H_INCLUDED
