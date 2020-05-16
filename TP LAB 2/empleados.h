#ifndef EMPLEADOS_H_INCLUDED
#define EMPLEADOS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>


typedef struct
{

    int id;
    char nombre[20];
    char apellido[20];
    int sector;
    float sueldo;
    int isEmpty;

} sEmpleado;


void mostrarEmpleado(sEmpleado emp);
void mostrarEmpleadoSalarios(sEmpleado emp);
void mostrarEmpleados(sEmpleado vec[],int tam);
void ordenarEmpleadosSectorApellidos(sEmpleado vec[],int tam);
void inicializarEmpleado(sEmpleado vec[], int tam);
int menu();
int altaEmpleado(int idEmpleado, sEmpleado vec[],int tam);
void bajaEmpleado(sEmpleado vec[],int tam);
void editarEmpleado(sEmpleado vec[],int tam);
int menuEditarEmpleado();
int buscarLibre(sEmpleado vec[], int tam);
int buscarEmpleado(int id, sEmpleado vec[],int tam);
int menuSector();
void infoSalarios(sEmpleado vec[], int tam);

#endif // EMPLEADOS_H_INCLUDED
