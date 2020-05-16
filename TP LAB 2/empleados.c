#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "empleados.h"

/** \brief funcion que muestra una estructura y verifica si se puede ocupar ese empacio en memoria.
 *
 * \param se le pasa un tipo de estructura y se declara el vector que la representara en la funcion.
 *
 * \return
 *
 */

void mostrarEmpleado(sEmpleado emp)
{
    if(emp.isEmpty==0)
    {
        printf("%d %20s %20s        %d    $%.2f    \n",emp.id, emp.nombre,emp.apellido,emp.sector,emp.sueldo);
    }

}

/** \brief muestra una cantidad limitada de estructuras.
 *
 * \param se le pasa una estructura y se declara un  vector que la representara en la funcion
 * \param se le pasa el tamaño
 * \return
 *
 */

void mostrarEmpleados(sEmpleado vec[],int tam)
{

    int flag=0;
    printf("                      |---LISTADO DE EMPLEADOS---|\n\n");
    printf("ID                 NOMBRE            APELLIDO        SECTOR   SUELDO    \n\n");

    for(int i=0; i<tam; i++)
    {

        if(vec[i].isEmpty==0)
        {
            mostrarEmpleado(vec[i]);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("No se ingresaron empleados.\n");
    }

}

/** \brief orneda a los empleados por sector primero y despues por apellidos.
 *
 * \param se le pasa un tipo de estructura y el tamaño
 *
 * \return
 *
 */

void ordenarEmpleadosSectorApellidos(sEmpleado vec[],int tam)
{

    sEmpleado auxEmpleado;

    for(int i=0; i<tam-1; i++)
    {
        for(int j=i+1; j<tam; j++)
        {

            if(vec[i].sector> vec[j].sector)
            {

                auxEmpleado=vec[i];
                vec[i]=vec[j];
                vec[j]=auxEmpleado;
            }
            else if( (vec[i].sector==vec[j].sector) && (vec[i].apellido<vec[j].apellido))
            {
                auxEmpleado=vec[i];
                vec[i]=vec[j];
                vec[j]=auxEmpleado;
            }

        }
    }

}

/** \brief pone todos los espacios libres para que se puedan almacenar datos
 *
 * \param se le pasa un tipo de estructura y el tamaño
 * \param
 * \return
 *
 */

void inicializarEmpleado(sEmpleado vec[], int tam)
{
    for (int i=0; i<tam; i++)
    {
        vec[i].isEmpty = 1;
    }
}

/** \brief muestra un menu de opciones y toma la opcion del usuario
 *
 * \param
 * \param
 * \return la opcion elegida por el usuario
 *
 */

int menu()
{
    int opcion;
    system("cls");

    printf("---LISTA DE EMPLEADOS---\n\n");
    printf("1- ALTA EMPLEADO\n");
    printf("2- EDITAR EMPLEADO\n");
    printf("3- BAJA EMPLEADO\n");
    printf("4- INFORMES EMPLEADOS\n");
    printf("5- SALIR\n\n");
    printf("Ingrese una opcion: ");
    scanf("%d",&opcion);

    return opcion;
}

/** \brief permite ingresar los datos y almacenarlos en una vector
 *
 * \param le paso un señalador unico.
 * \param le paso una tipo de estructura y el tamaño
 * \return si se completo la carga
 *
 */

int altaEmpleado(int idEmpleado, sEmpleado vec[],int tam)
{
    int paso=0;
    int indice = buscarLibre(vec, tam);
    int id=idEmpleado;
    //int existe;
    sEmpleado auxEmpleado;
    /*char auxNombre[100];
    char auxApellido[100];*/

    system("cls");
    printf("---ALTA EMPLEADOS---\n\n");

    if(indice==-1 )
    {
        printf("Sistema completo\n\n");
    }
    else
    {
        auxEmpleado.id=id;



        printf("Su ID es: %d\n",auxEmpleado.id);


        printf("Ingrese su nombre: ");
        fflush(stdin);
        gets(auxEmpleado.nombre);
        strlwr(auxEmpleado.nombre);
        auxEmpleado.nombre[0]=toupper(auxEmpleado.nombre[0]);

        while(strlen(auxEmpleado.nombre)>20)
        {
            printf("ERROR. Nombre demaciado largo. [MAX. 20 caracteres]");
            printf("Ingrese su nombre nuevamente: ");
            fflush(stdin);
            gets(auxEmpleado.nombre);
            strlwr(auxEmpleado.nombre);
            auxEmpleado.nombre[0]=toupper(auxEmpleado.nombre[0]);
        }

        for(int i=0; auxEmpleado.nombre[i] != '\0'; i++)
        {
            if(auxEmpleado.nombre[i] == ' ')
            {
                auxEmpleado.nombre[i+1]= toupper(auxEmpleado.nombre[i+1]);
            }
        }


        printf("Ingrese su apellido: ");
        fflush(stdin);
        gets(auxEmpleado.apellido);
        strlwr(auxEmpleado.apellido);
        auxEmpleado.apellido[0]=toupper(auxEmpleado.apellido[0]);

        while(strlen(auxEmpleado.apellido)>20)
        {
            printf("ERROR. Apellido demaciado largo. [MAX. 20 caracteres]");
            printf("Ingrese su apellido nuevamente: ");
            fflush(stdin);
            gets(auxEmpleado.apellido);
            strlwr(auxEmpleado.apellido);
            auxEmpleado.apellido[0]=toupper(auxEmpleado.apellido[0]);
        }

        for(int i=0; auxEmpleado.apellido[i] != '\0'; i++)
        {
            if(auxEmpleado.apellido[i] == ' ')
            {
                auxEmpleado.apellido[i+1]= toupper(auxEmpleado.apellido[i+1]);
            }
        }




        printf("Ingrese su sueldo: ");
        scanf("%f", &auxEmpleado.sueldo);



        switch(menuSector())
        {
        case 1:
            auxEmpleado.sector=1;
        break;
        case 2:
            auxEmpleado.sector=2;
        break;
        case 3:
            auxEmpleado.sector=3;
        break;
        case 4:
            auxEmpleado.sector=4;
        break;
        }


        auxEmpleado.isEmpty=0;
    }


    vec[indice]=auxEmpleado;
    paso=1;
    return paso;
}


/** \brief busca el primer espacio en memoria que este vacio para almacenar datos
 *
 * \param se le pasa un tipo de estructura y el tamaño
 * \param
 * \return el indice del espacio vacio
 *
 */

int buscarLibre(sEmpleado vec[],int tam )
{
    int indice = -1;

    for (int i=0; i<tam; i++)
    {
        if (vec[i].isEmpty==1)
        {
            indice=i;
            break;
        }
    }


    return indice;
}


/** \brief busca un empleado por medio de su id
 *
 * \param se ingresa el id del empleado a buscar
 * \param se le pasa un tipo de estructura y el tamaño
 * \return
 *
 */

int buscarEmpleado(int id, sEmpleado vec[],int tam )
{
    int indice = -1;

    for (int i=0; i<tam; i++)
    {
        if (vec[i].id== id&&vec[i].isEmpty==0)
        {
            indice=i;
            break;
        }
    }


    return indice;
}
/** \brief permite una baja logica
 *
 * \param se le pasa un tipo de estructura y el tamaño
 * \param
 * \return
 *
 */

void bajaEmpleado(sEmpleado vec[],int tam)
{
    int id;
    int indice;
    char confirmacion;

    system("cls");

    printf("---BAJA EMPLEADO---\n\n");
    printf("Ingrese ID: ");
    scanf("%d",&id);


    indice=buscarEmpleado(id, vec, tam);

    if(indice==-1)
    {

        printf("No hay un empleado con el ID %d.\n\n",id);

    }
    else
    {

        mostrarEmpleado(vec[indice]);
        printf("Desea borra ese empleado? S/N.");
        fflush(stdin);
        scanf("%c",&confirmacion);



        if(confirmacion=='s')
        {
            vec[indice].isEmpty = 1;
            printf("Empleado borrado de la base de datos con exito.");
        }
        else
        {
            printf("Operacion cancelada.");
        }

    }

}
/** \brief muestra un menu de opciones y toma la opcion del usuario
 *
 * \param
 * \param
 * \return la opcion elegida por el usuario
 *
 */
int menuEditarEmpleado()
{
    int opcion;

    printf("MENU DE MODIFICACION DE EMPLEADOS\n\n");
    printf("1-  EDITAR NOMBRE\n");
    printf("2-  EDITAR APELLIDO\n");
    printf("3-  EDITAR SUELDO\n");
    printf("4-  EDITAR SECTTOR\n\n");

    printf("Ingrese una opcion: ");
    scanf("%d",&opcion);

    return opcion;

}

/** \brief permite modificar distintos campos de una estructura
 *
 * \param se le pasa un tipo de estructura y el tamaño
 * \param
 * \return
 *
 */

void editarEmpleado(sEmpleado vec[],int tam)
{
    int id;
    int indice;
    char confirmacion;

    system("cls");

    printf("---EDITAR EMPLEADO---\n\n");
    printf("Ingrese ID: ");
    scanf("%d",&id);


    indice=buscarEmpleado(id, vec, tam);

    if(indice==-1)
    {

        printf("No hay un empleado con el ID %d.\n\n",id);

    }
    else
    {
        mostrarEmpleado(vec[indice]);
        printf("Desea modificar ese empleado? S/N.");
        fflush(stdin);
        scanf("%c",&confirmacion);
    }




    if(confirmacion=='s')
    {

        switch(menuEditarEmpleado())
        {
        case 1:
            printf("Ingrese el nuevo nombre: ");
            fflush(stdin);
            gets(vec[indice].nombre);

            strlwr(vec[indice].nombre);
            vec[indice].nombre[0]=toupper(vec[indice].nombre[0]);

        while(strlen(vec[indice].nombre)>20)
        {
            printf("ERROR. Nombre demaciado largo. [MAX. 20 caracteres]");
            printf("Ingrese su nombre nuevamente: ");
            fflush(stdin);
            gets(vec[indice].nombre);
            strlwr(vec[indice].nombre);
            vec[indice].nombre[0]=toupper(vec[indice].nombre[0]);
        }

        for(int i=0;  vec[indice].nombre[i] != '\0'; i++)
        {
            if( vec[indice].nombre[i] == ' ')
            {
                 vec[indice].nombre[i+1]= toupper( vec[indice].nombre[i+1]);
            }
        }

            break;
        case 2:
            printf("Ingrese el nuevo apellido: ");
            fflush(stdin);
            gets(vec[indice].apellido);


            strlwr(vec[indice].apellido);
            vec[indice].apellido[0]=toupper(vec[indice].apellido[0]);

        while(strlen(vec[indice].apellido)>20)
        {
            printf("ERROR. Nombre demaciado largo. [MAX. 20 caracteres]");
            printf("Ingrese su nombre nuevamente: ");
            fflush(stdin);
            gets(vec[indice].apellido);
            strlwr(vec[indice].apellido);
            vec[indice].apellido[0]=toupper(vec[indice].apellido[0]);
        }

        for(int i=0;  vec[indice].apellido[i] != '\0'; i++)
        {
            if( vec[indice].apellido[i] == ' ')
            {
                 vec[indice].apellido[i+1]= toupper( vec[indice].apellido[i+1]);
            }
        }



            break;
        case 3:
            printf("Ingrese nuevo sueldo: ");
            scanf("%f",&vec[indice].sueldo);
            break;
        case 4:

            switch(menuSector())
        {
        case 1:
            vec[indice].sector=1;
        break;
        case 2:
            vec[indice].sector=2;
        break;
        case 3:
            vec[indice].sector=3;
        break;
        case 4:
            vec[indice].sector=4;
        break;

        break;
        }
        printf("\n\nEmpleado modificado con exito.");
    }

    }else
    {
        printf("Operacion cancelada.");
    }


}

/** \brief muestra un menu de opciones y toma la opcion del usuario
 *
 * \param
 * \param
 * \return la opcion elegida por el usuario
 *
 */
int menuSector()
{
    int eleccion;

    printf("\n|---ELECCION DE SECTOR---|\n\n");
    printf("1- Sector RRHH.\n");
    printf("2- Sector SISTEMAS.\n");
    printf("3- Sector VENTAS\n");
    printf("4- Sector SEGURIDAD\n");
    printf("Ingrese una opcion: ");
    scanf("%d",&eleccion);

    while(eleccion<1||eleccion>4)
    {
        printf("ERROR. Sector no disponible. Intente otra vez.\n");
        printf("Ingrese una opcion: ");
        scanf("%d",&eleccion);
    }

    return eleccion;
}

/** \brief calcula el total de salarios, el promedio, y muestra quienes lo superan en consola
 *
 * \param
 * \param
 * \return se le pasa un tipo de estructura y el tamaño
 *
 */

void infoSalarios(sEmpleado vec[], int tam)
{

    int totalSalarios=0;
    int promedioSalarios;
    int contador=0;


    for(int i=0;i<tam;i++)
    {
        if(vec[i].isEmpty==0)
        {
            totalSalarios=totalSalarios+vec[i].sueldo;
            contador++;
        }



    }
    promedioSalarios=totalSalarios/contador;
    printf("\nEl total de todos los salarios son: %d \n\n",totalSalarios);

    printf("Los empleados que superan el promedio de sueldo son: \n");
 for(int j=0;j<tam;j++)
    {
        if (vec[j].sueldo>promedioSalarios)
        {
            mostrarEmpleado(vec[j]);
        }
    }
    printf("\n\n");
    system("pause");
}


