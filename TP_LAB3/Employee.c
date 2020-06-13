#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"
#include "menu.h"
#include "string.h"

Employee* employee_new(){

    return (Employee*)malloc(sizeof(Employee));
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldo){


    Employee* auxEmployee = NULL;

    auxEmployee = employee_new();

    if(auxEmployee!=NULL)
    {
        auxEmployee->id=idStr;
        strcpy(auxEmployee->nombre,nombreStr);
        auxEmployee->horasTrabajadas=horasTrabajadasStr;
        auxEmployee->sueldo=sueldo;

    }
    return NULL;
}


int employee_getId(Employee* this,int* id)
{
    int retorno = -1;
	if(this != NULL && id != NULL)
	{
		retorno = 0;
		sprintf(id,"%d",this->id);
	}
	return retorno;

}

int employee_getNombre(Employee* this,char* nombre)
{
    int retorno = -1;
	if(this != NULL && nombre != NULL)
	{
		retorno = 0;
		strcpy(nombre,this->nombre);
	}
	return retorno;

}

int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
{



}

int employee_getSueldo(Employee* this,int* sueldo)
{



}
