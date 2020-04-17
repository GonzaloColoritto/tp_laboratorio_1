#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


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
 unsigned int ingreseOpcion(void)
{
    int opcion;
    printf("                  INGRESE UNA OPCION: ");
    scanf("%d",&opcion);


    return opcion;
}
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
