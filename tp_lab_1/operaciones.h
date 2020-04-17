#ifndef OPERACIONES_H_INCLUDED
#define OPERACIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
/** Funcion usada para sumas dos numeros enteros.
 * sumaNum1 es el primer numero ingresado por el usuario.
 * sumaNum2 es el segundo numero ingresado por el usuario
 * Retorna el resultado de la suma de ambos numeros.
 *
 */

unsigned int sumarDosNumeros(int sumaNum1,int sumaNum2)
{
    int resultadoSuma;
    resultadoSuma=(sumaNum1+sumaNum2);
return resultadoSuma;
}


/** Funcion usada para realizar la resta de dos numeros.
 * restaNUm1 es el primer numero ingresado por el usuario.
 * restaNum2 es el segundo numero ingresado por el usuario.
 * Retorna el resultado de la resta de ambos numeros.
 *
 */

unsigned int restarDosNumeros(int restaNum1, int restaNum2)
{
    int resultadoResta;
    resultadoResta=(restaNum1-restaNum2);
    return resultadoResta;
}


/** Funcion que realiza una multiplicacion entre dos numeros.
 *
 * multiplicarNum1 es el primer numero ingresado por el usuario.
 * multiplicarNum2 es el segundo numero ingresado por el usuario.
 * retorna el resultado de la division.
 *
 */

unsigned int multiplicarDosNumeros(int multiplicarNum1, int multiplicarNum2)
{
    int resultadoMultiplicacion;
    resultadoMultiplicacion = (multiplicarNum1*multiplicarNum2);
    return resultadoMultiplicacion;
}


/** Funcion utilizada para realizar una division entre dos numeros
 *
 * divisionNum1 es el primer numero ingresado por el usuario y el dividendo.
 * divisionNum2 es el segundo numero ingresado por el usuario y el divisor.
 * retorna el resultado de la division.
 *
 */

 float divisionDosNumeros(int divisionNum1, int divisionNum2)
{
  float resultadoDivision;


   if (divisionNum2==0)
    {
        resultadoDivision=0;

    }
    if (divisionNum2!=0)
    {
   resultadoDivision =  (float)divisionNum1/ divisionNum2;

    }
    return resultadoDivision;
}



/** Funcion que realiza el factorial de un numero.
 *
 * numeroFactorialA es el numero ingresado del usuario.
 *  retorna el resultado del factoreo.
 *
 */

unsigned int factorialParaA(int numeroFactorialA)
{
    int contadorFactorialA;
    int factorialA=1;


    for(contadorFactorialA=1;contadorFactorialA<=numeroFactorialA;contadorFactorialA++)
    {
        factorialA = factorialA *contadorFactorialA;
    }



    return factorialA;

}
/** Funcion que realiza el factorial de un numero.
 *
 * numeroFactorialB es el numero ingresado del usuario.
 *  retorna el resultado del factoreo.
 *
 */
unsigned int factorialParaB(int numeroFactorialB)
{
    int contadorFactorialB;
    int factorialB=1;

    for(contadorFactorialB=1;contadorFactorialB<=numeroFactorialB;contadorFactorialB++)
    {
        factorialB=factorialB*contadorFactorialB;
    }
    return factorialB;
}




#endif // OPERACIONES_H_INCLUDED
