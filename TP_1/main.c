#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float PrimerOperando;
    float SegundoOperando;
    int FlagPrimerOperando = 0;
    int FlagSegundoOperando = 0;
    float Suma;
    float Resta;
    float Division;
    float Multiplicacion;
    long long int Factorial;

    while(seguir=='s')
    {
        system("cls");
        fflush(stdin);
        printf("  <<<<<<<<CALCULADORA>>>>>>>>\n\n");
        if(FlagPrimerOperando)
        {
            printf("1- Ingresar 1er operando (A = %.2f)\n", PrimerOperando);
        }
        else
        {
            printf("1- Ingresar 1er operando (A = )\n");
        }

        if(FlagSegundoOperando)
        {
            printf("2- Ingresar 2do operando (B = %.2f)\n", SegundoOperando);
        }
        else
        {
            printf("2- Ingresar 2do operando (B = )\n");
        }

        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        opcion = IngresarOpcion(FlagPrimerOperando, FlagSegundoOperando);

        switch(opcion)
        {
            case 1:
                PrimerOperando = IngresarOperando();
                FlagPrimerOperando = 1;
                break;

            case 2:
                SegundoOperando = IngresarOperando();
                FlagSegundoOperando = 1;
                break;

            case 3:
                Suma = CalcularSuma(PrimerOperando, SegundoOperando);
                printf("La suma es: %.2f \n", Suma);
                system("pause");
                break;

            case 4:
                Resta = CalcularResta(PrimerOperando, SegundoOperando);
                printf("La resta es: %.2f \n", Resta);
                system("pause");
                break;

            case 5:
                if(SegundoOperando != 0)
                {
                    Division = CalcularDivision(PrimerOperando, SegundoOperando);
                    printf("La division es: %.2f \n", Division);
                }
                else
                {
                    printf("ERROR no se puede divivir por cero. \n");

                }
                system("pause");
                break;

            case 6:
                Multiplicacion = CalcularMultiplicacion(PrimerOperando, SegundoOperando);
                printf("La multiplicacion es: %.2f \n", Multiplicacion);
                system("pause");
                break;

            case 7:
                if(PrimerOperando > -1 && PrimerOperando == (int)PrimerOperando)
                {
                    Factorial = CalcularFactorial(PrimerOperando);
                    printf("El factorial es: %lld \n", Factorial);

                }
                else
                {
                    printf("ERROR no se puede hacer factorial de un numero negativo y/o racional\n");

                }
                system("pause");
                break;

            case 8:
                Suma = CalcularSuma(PrimerOperando, SegundoOperando);
                printf("La suma es: %.2f \n", Suma);

                Resta = CalcularResta(PrimerOperando, SegundoOperando);
                printf("La resta es: %.2f \n", Resta);

                if(SegundoOperando != 0)
                {
                    Division = CalcularDivision(PrimerOperando, SegundoOperando);
                    printf("La division es: %.2f \n", Division);
                }
                else
                {
                    printf("ERROR no se puede divivir por cero. \n");

                }

                Multiplicacion = CalcularMultiplicacion(PrimerOperando, SegundoOperando);
                printf("La multiplicacion es: %.2f \n", Multiplicacion);

                 if(PrimerOperando > -1 && PrimerOperando == (int)PrimerOperando)
                {
                    Factorial = CalcularFactorial(PrimerOperando);
                    printf("El factorial es: %lld \n", Factorial);

                }
                else
                {
                    printf("ERROR no se puede hacer factorial de un numero negativo y/o racional\n");

                }

                system("pause");
                break;

            case 9:
                seguir = 'n';
                break;
        }

    }

    return 0;
}
