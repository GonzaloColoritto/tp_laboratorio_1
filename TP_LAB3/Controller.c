#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#include "parser.h"


/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */

   int controller_loadFromText(char *path, LinkedList *pArrayListEmployee) {
	FILE* pFile;
	int paso = 0;

	pFile = fopen("data.csv", "r");
	if (pFile != NULL) {
		parser_EmployeeFromText(pFile, pArrayListEmployee);
		fclose(pFile);
		paso = 1;
	}
    return paso;
}

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Alta de empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_addEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Modificar datos de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_editEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Baja de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_removeEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Listar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_ListEmployee(LinkedList* arrayListEmployee)
{
    int i;
    int id;
    char nombre[128];
    int horasTrabajadas;
    int sueldo;
    int retorno = -1;

    Employee* empleado;

    if(arrayListEmployee !=NULL)
    {
        retorno = 0;
        for(i=0; i < ll_len(arrayListEmployee); i++)
        {
            empleado = ll_get(arrayListEmployee,i);
            employee_getId(empleado,&id);
            employee_getNombre(empleado,nombre);
            employee_getHorasTrabajadas(empleado,&horasTrabajadas);
            employee_getSueldo(empleado,&sueldo);

            printf("\nID: %d",id);
            printf("\nNombre: %s",nombre);
            printf("\nSueldo: %d",sueldo);
            printf("\nHoras trabajadas: %d",horasTrabajadas);
            printf("\n");
        }
    }
    system("pause");
    return retorno;
}

/** \brief Ordenar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_sortEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path , LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee)
{
    return 1;
}

