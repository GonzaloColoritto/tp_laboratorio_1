#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "empleados.h"

#define TAM 1000


int main()
{
    char seguir='s';
    char confirmacion;
    sEmpleado lista[TAM];
    int proximoId=1000;
    int flag=0;


    inicializarEmpleado(lista, TAM);


do {
    switch(menu()){

    case 1:

    if(altaEmpleado(proximoId,lista, TAM)==1)
    {
        flag=1;
    proximoId++;
    }

    break;

    case 2:
        if(flag==1){
    editarEmpleado(lista, TAM);
        }else{
        printf("ERROR. Primero debe dar de alta un empleado.\n\n");
        system("pause");
        }
    break;

    case 3:
        if(flag==1){
    bajaEmpleado(lista,TAM);
    }else{
        printf("ERROR. Primero debe dar de alta un empleado.\n\n");
        system("pause");
    }
    break;

    case 4:
        if(flag==1){
    ordenarEmpleadosSectorApellidos(lista, TAM);
    mostrarEmpleados(lista,TAM);
    infoSalarios(lista,TAM);
        }else{
        printf("ERROR. Primero debe dar de alta un empleado.\n\n");
        system("pause");
        }
    break;
    case 5:

    printf(" ¿Desea salir? S/N: ");
    fflush(stdin);
    scanf("%c",&confirmacion);

    confirmacion=tolower(confirmacion);

    if(confirmacion=='s')
    {
        seguir = 'n';
    }
    break;


    printf("\n");
    system("pause");
}

}while(seguir=='s');
}

