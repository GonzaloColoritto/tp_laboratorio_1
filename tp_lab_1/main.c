#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"
#include "menu.h"
#include <windows.h>


int main()
{
    int seguir = 1;
    int num1;
    int num2;
    int suma;
    int resta;
    float division;
    int multiplicacion;
    int factorialDeA;
    int factorialDeB;
    int flag1=0;
    int flag2=0;
    int flag3=0;

    int opcionMenu;

    menuCalculadoraVacio();

    printf("Ingrese una opcion: ");
    scanf("%d",&opcionMenu);
   do{
   switch(opcionMenu)
   {
    case 1:
     system("COLOR C");
     printf("   °INGRESO DEL PRIMER NUMERO°\n");

    printf("    Ingrese su primer numero: ");
    scanf("%d",&num1);
    flag1=1;

    printf("    El primer numero ingresado(A) es: %d\n\n",num1);
    menuCalculadoraX(num1);
    printf("Ingrese una opcion: ");
    scanf("%d",&opcionMenu);


    break;

    case 2:
        if(flag1==1)
   {
    system("COLOR C");
    printf("    °INGRESO DEL SEGUNDO NUMERO°\n");
    printf("    Ingrese su segundo numero: ");
    scanf("%d",&num2);
    flag2=1;
    system("cls");
    printf("    El segundo numero ingresado(B) es: %d\n\n",num2);

    menuCalculadora(num1,num2);
    printf("Ingrese una opcion: ");
    scanf("%d",&opcionMenu);

   }else{printf("   *Para ingresar el segundo numero debe ingresar el primer numero previamente*\n");
    system("pause");
    system("cls");

    menuCalculadoraVacio();
    printf("Ingrese una opcion: ");
    scanf("%d",&opcionMenu);
   }


    break;

    case 3:
     if(flag1==1&&flag2==1){

    system("COLOR C");
     printf("-->REALIZANDO OPERACIONES");
     printf(".");
     Sleep(500);
     printf(".");
     Sleep(500);
     printf(".\n");
     Sleep(500);
     printf("   Sumando");
     Sleep(1000);
     printf(".");
     Sleep(500);
     printf(".");
     Sleep(500);
     printf(".\n");
     Sleep(500);
     printf("   Restando");
     Sleep(1000);
     printf(".");
     Sleep(500);
     printf(".");
     Sleep(500);
     printf(".\n");
     Sleep(500);
    printf("   Dividiendo");
     Sleep(1000);
     printf(".");
     Sleep(500);
     printf(".");
     Sleep(500);
     printf(".\n");
     Sleep(500);
    printf("   Multiplicando");
     Sleep(1000);
     printf(".");
     Sleep(500);
     printf(".");
     Sleep(500);
     printf(".\n");
     Sleep(500);
    printf("   Realizando factoreo");
     Sleep(1000);
     printf(".");
     Sleep(500);
     printf(".");
     Sleep(500);
     printf(".\n\n");
     Sleep(1500);

    suma = sumarDosNumeros(num1,num2);
    resta=restarDosNumeros(num1,num2);
    division=divisionDosNumeros(num1,num2);
    multiplicacion=multiplicarDosNumeros(num1,num2);
    factorialDeA=factorialParaA(num1);
    factorialDeB=factorialParaB(num2);

    printf("   -RESULTADOS CALCULADOS- \n\n");
    flag3=1;
    system("pause");

    menuCalculadora(num1,num2);
    printf("Ingrese una opcion: ");
    scanf("%d",&opcionMenu);


    }else if (flag1==1&&flag2==0)
    {
        printf("    *Para calcular primero debe ingresar el segundo numero*\n");
        system("pause");
    menuCalculadoraX(num1);
    printf("Ingrese una opcion: ");
    scanf("%d",&opcionMenu);
    }else
    {
        printf("    *Para calcular primero debe ingresar los numeros*\n");
        system("pause");
    menuCalculadoraVacio();
    printf("Ingrese una opcion: ");
    scanf("%d",&opcionMenu);
    }
    break;
    case 4:
        system("COLOR C");
        if(flag3==1){
        printf("    ||          La suma de %d + %d es: [%d]              ||            \n",num1,num2,suma);
    printf("    ||          La resta de %d - %d es: [%d]            ||          \n",num1,num2,resta);
    if(num2!=0)
    {
        printf("    ||         La division de %d / %d es:[%.2f]         ||      \n",num1,num2,division);

    }else
    {
     printf("    ||      MATH ERROR. No se puede dividir por 0.    || \n");
    }
    printf("    ||    La multiplicacion de %d * %d es: [%d]          ||    \n",num1,num2,multiplicacion);
    printf("    ||          El factorial de %d es: [%d]             ||         \n",num1,factorialDeA);
    printf("    ||          El factorial de %d es: [%d]             ||           \n\n",num2,factorialDeB);

    system("pause");
    menuCalculadora(num1,num2);
    printf("Ingrese una opcion: ");
    scanf("%d",&opcionMenu);
        }

    else if(flag1==1&&flag2==0)
    {
    printf("   *ERROR. Le falto ingresar el segundo numero*\n");
    system("pause");
    menuCalculadoraX(num1);
    printf("Ingrese una opcion: ");
    scanf("%d",&opcionMenu);
    } else
    {
        printf("    *Para mostrar primero debe calcular los resultados*\n");
        system("pause");
    menuCalculadoraVacio();
    printf("Ingrese una opcion: ");
    scanf("%d",&opcionMenu);
    }


    break;

    case 5:
    system("COLOR C");
        seguir = 0;
        printf("    _______________________________\n");
        printf("   |                               |\n");
        printf("   |Gracias por usar mi calculadora|\n");
        printf("   |_______________________________|");
    break;

    default:
        if(flag1==0){
        printf("ERROR: Esa opcion no esta disponible.\n");
        system("pause");
         menuCalculadoraVacio();
        printf("Ingrese una opcion: ");
        scanf("%d",&opcionMenu);

        }else if(flag2==0)
        {
            printf("ERROR: Esa opcion no esta disponible.\n");
            system("pause");
            menuCalculadoraX(num1);
            printf("Ingrese una opcion: ");
            scanf("%d",&opcionMenu);


        }else
        {
            printf("ERROR: Esa opcion no esta disponible.\n");
            system("pause");
            menuCalculadora(num1,num2);
            printf("Ingrese una opcion: ");
            scanf("%d",&opcionMenu);


        }





   }

   }while(seguir==1);
   Sleep(500);
}

