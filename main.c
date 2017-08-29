#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int operA;
    int operB;
    int suma;
    int resta;
    int multiplicacion;
    float division;
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("1er operador: ");
                scanf("%d",& operA);
                break;
            case 2:
                printf("2er operador: ");
                scanf("%d",& operB);
                break;
            case 3:
                suma = funsumar(operA, operB);
                printf("La suma es de: %d\n", suma);
                break;
            case 4:
                resta = funresta(operA, operB);
                printf("La resta es de: %d\n", resta);
                break;
            case 5:
                division = fundividir(operA, operB);
                printf("La division es de: %.2f\n", division);
                break;
            case 6:
                multiplicacion = funmultiplicaion(operA, operB);
                printf("La multiplicacion es de: %d\n", multiplicacion);
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
