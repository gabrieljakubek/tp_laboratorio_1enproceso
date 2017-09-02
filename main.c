#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    float operA;
    float operB;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    int factorial;
    int valdivision;
    int valpositivo;
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n",operA);
        printf("2- Ingresar 2do operando (B=%.2f)\n",operB);
        printf("3- Calcular la suma (A+B) = %.2f\n",suma);
        printf("4- Calcular la resta (A-B) = %.2f\n",resta);
        printf("5- Calcular la division (A/B) = %.2f\n",division);
        printf("6- Calcular la multiplicacion (A*B) = %.2f\n",multiplicacion);
        printf("7- Calcular el factorial (A!) = %lli\n",factorial);
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            operA = funIngreso();
            break;
        case 2:
            operB = funIngreso();
            break;
        case 3:
            suma = funSumar(operA, operB);
            printf("La suma es de: %f\n", suma);
            break;
        case 4:
            resta = funResta(operA, operB);
            printf("La resta es de: %f\n", resta);
            break;
        case 5:
            valdivision = funValidarCero(operA, operB);
            if (valdivision != 0)
            {
                division = funDividir(operA, operB);
                printf("La division es de: %.2f\n", division);
            }
            else
            {
                printf("Error!!!! No se puede realizar operacion \n");
            }
            break;
        case 6:
            multiplicacion = funMultiplicaion(operA, operB);
            printf("La multiplicacion es de: %f\n", multiplicacion);
            break;
        case 7:

            printf("El factorial de %.f es de: %d\n", operA,factorial);
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
