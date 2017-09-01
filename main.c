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
                valdivision = funValidar(operA, operB);
                if (valdivision != 0)
                {
                    division = funDividir(operA, operB);
                    printf("La division es de: %.2f\n", division);
                }
                else
                {
                    printf("Error!!!! No se puede realizar funcion");
                }
                break;
            case 6:
                multiplicacion = funMultiplicaion(operA, operB);
                printf("La multiplicacion es de: %f\n", multiplicacion);
                break;
            case 7:
                factorial = funFactorial((int)operA);
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
