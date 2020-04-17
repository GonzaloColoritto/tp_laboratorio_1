#ifndef CUENTAS_H_INCLUDED
#define CUENTAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
/** Funcion usada para sumas dos numeros enteros.
 *
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
 *
 * Retorna el resultado de la resta de ambos numeros.
 *
 */

unsigned int restarDosNumeros(int restaNum1, int restaNum2)
{
    int resultadoResta;
    resultadoResta=(restaNum1-restaNum2);
    return resultadoResta;
}


/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

unsigned int multiplicarDosNumeros(int multiplicarNum1, int multiplicarNum2)
{
    int resultadoMultiplicacion;
    resultadoMultiplicacion = (multiplicarNum1*multiplicarNum2);
    return resultadoMultiplicacion;
}


/** \brief
 *
 * \param
 * \param
 * \return
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



/** \brief
 *
 * \param
 * \param
 * \return
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






#endif // CUENTAS_H_INCLUDED
