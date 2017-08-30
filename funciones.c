#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int funsumar(int primernum,int segundonum)
{
    int resultado;
    resultado = primernum + segundonum;
    return resultado;
}

int funresta(int primernum,int segundonum)
{
    int resultado;
    resultado = primernum - segundonum;
    return resultado;
}

int fundividir (int primernum,int segundonum)
{
    float resultado;
    int chequeo;
    chequeo = funvalidar(primernum, segundonum);
    if (chequeo != 0)
    {
    resultado =(float) primernum / segundonum;
    }
    else
    {
        printf("Error!!!! El proceso no se puede realizar");
    }
    return resultado;
}

int funmultiplicaion (int primernum,int segundonum)
{
    int resultado;
    int chequeo;
    chequeo = funvalidar(primernum, segundonum);
    if (chequeo != 0)
    {
    resultado = primernum * segundonum;
    }
    else
    {
        printf("Error!!!! El proceso no se puede realizar");
    }
    return resultado;
}

int funvalidar (int primernum,int segundonum)
{
    int respuesta =0;
    while (primernum != 0 && segundonum != 0)
    {
        respuesta  = 1;
    }
    return respuesta;
}

int funfactorial (int primernum)
{
    int respuesta = 1;
    int cont;
    for (cont = primernum; cont > 1; cont--)
    {
        respuesta = respuesta * cont;
    }
    return respuesta;
}

void funtodas (int primernum,int segundonum)
{

}
