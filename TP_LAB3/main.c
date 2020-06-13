#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"
#include "menu.h"
#include <ctype.h>
#include <string.h>

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{

    char seguir = 's';
    char confirmacion;

    LinkedList* listaEmpleados = ll_newLinkedList();
    do{
        switch(menuOpciones())
        {
                 case 1:

                if(controller_loadFromText("data.csv",listaEmpleados)==1)
                {
                    printf("Datos Cargados con exito\n");
                }else{

                printf("Error en la carga de datos\n");
                }

                break;

                  case 2:


                break;

                  case 3:


                break;

                  case 4:


                break;

                  case 5:

                break;

                  case 6:
                controller_ListEmployee(listaEmpleados);


                break;

                  case 7:


                break;

                  case 8:


                break;

                  case 9:


                break;

                  case 10:


                printf(" ¿Desea salir? S/N: ");
                fflush(stdin);
                scanf("%c",&confirmacion);

                confirmacion=tolower(confirmacion);

                if(confirmacion=='s')
                {
                    seguir = 'n';
                }
                            break;
                    }
    }while(seguir=='s');
    return 0;
}
