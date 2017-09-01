#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float funIngreso()
{
    float num;
    printf("Ingrese un numero: ");
    scanf("%f",&num);
    return num;
}

float funSumar(float primernum,float segundonum)
{
    float resultado;
    resultado = primernum + segundonum;
    return resultado;
}

float funResta(float primernum,float segundonum)
{
    float resultado;
    resultado = primernum - segundonum;
    return resultado;
}

float funDividir (float primernum,float segundonum)
{
    float resultado;
    resultado = primernum / segundonum;
    return resultado;
}

float funMultiplicaion (float primernum,float segundonum)
{
    float resultado;
    resultado = primernum * segundonum;
    return resultado;
}

float funValidar (float primernum,float segundonum)
{
    int respuesta =0;
    while (primernum != ((float) 0 && segundonum != (float) 0) && (primernum>segundonum))
    {
        respuesta  = 1;
    }
    return respuesta;
}

int funFactorial (int primernum)
{
    int respuesta = 1;
    int cont;
    for (cont =  primernum; cont > 1; cont--)
    {
        respuesta = respuesta * cont;
    }
    return respuesta;
}
