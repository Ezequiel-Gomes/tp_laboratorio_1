#include <stdio.h>
#include <stdlib.h>


/** \brief Pide ingresar un numero al usuario y chequea que sea valida, en caso de ser valida devuelve la opcion y sino devuelve 0
 *
 * \param FlagPrimerOperando Indicador de si se a ingresado el primer operando
 * \param FlagSegundoOperando Indicador de si se a ingresado el segundo operando
 * \return Devuelve la opcion ingresada si es valida y sino devuelve 0
 *
 */

int IngresarOpcion(int FlagPrimerOperando, int FlagSegundoOperando)
{
    int Opcion;
    int EsNumero;

    printf("\nIngresar Opcion: ");
    EsNumero = scanf("%d", &Opcion);
    if(EsNumero)
    {
        if(FlagPrimerOperando && FlagSegundoOperando && (Opcion < 1 || Opcion > 9))
        {
            Opcion = 0;
        }
        else if(FlagPrimerOperando && !FlagSegundoOperando && Opcion != 1 && Opcion != 2 && Opcion != 7 && Opcion != 9)
        {
            Opcion = 0;
        }
        else if(!FlagPrimerOperando && Opcion != 1 && Opcion != 2 && Opcion != 9)
        {
            Opcion = 0;
        }
    }
    else
    {
        Opcion = 0;
    }

    if(Opcion == 0)
    {
        system("cls");
        printf("ERROR Opcion Invalida \n");
        system("pause");
    }

    return Opcion;

}

/////////////////////////////////////////////

/** \brief  Pide un operando de punto flotante por pantalla, valida que sea un numero y lo retorna.
 *
 * \return  El numero ingresado
 *
 */
float IngresarOperando()
{
    float Operando;
    int EsNumero;

    do
    {
        fflush(stdin);
        printf("Ingrese un operando: ");
        EsNumero = scanf("%f", &Operando);
        if(!EsNumero)
        {
            printf("ERROR usted no ingreso un numero\n");
            system("pause");
            printf("\n");
        }

    }while(!EsNumero);



    return Operando;
}

/////////////////////////////////////////////

/** \brief Recibe dos numeros y devuelve la suma de dichos numeros
 *
 * \param PrimerOperando Es un numero con decimales
 * \param SegundoOperando Es un numero con decimales
 * \return El resultado de la suma
 */
float CalcularSuma(float PrimerOperando, float SegundoOperando)
{
    float Suma;

    Suma = PrimerOperando + SegundoOperando;

    return Suma;

}

/////////////////////////////////////////////

/** \brief Recibe dos numeros y devuelve la resta de dichos numeros
 *
 * \param PrimerOperando Es un numero con decimales
 * \param SegundoOperando Es un numero con decimales
 * \return El resultado de la resta
 *
 */
float CalcularResta(float PrimerOperando, float SegundoOperando)
{
    float Resta;

    Resta = PrimerOperando - SegundoOperando;

    return Resta;
}

////////////////////////////////////////////

/** \brief Recibe dos numeros y devuelve la division de dichos numeros
 *
 * \param PrimerOperando Es un numero con decimales
 * \param SegundoOperando Es un numero con decimales
 * \return El resultado de la division
 *
 */
float CalcularDivision(float PrimerOperando, float SegundoOperando)
{
    float Division;

    Division = PrimerOperando / SegundoOperando;

    return Division;
}

/////////////////////////////////////////////

/** \brief Recibe dos numeros y devuelve la multiplicacion de dichos numeros
 *
 * \param PrimerOperando Es un numero con decimales
 * \param SegundoOperando Es un numero con decimales
 * \return El resultado de la multiplicacion
 *
 */
float CalcularMultiplicacion(float PrimerOperando, float SegundoOperando)
{
    float Multiplicacion;

    Multiplicacion = PrimerOperando * SegundoOperando;

    return Multiplicacion;
}

//////////////////////////////////////////////

/** \brief Recibe un numero y devuelve el factorial de dicho numero
 *
 * \param Operando Es un numero entero
 * \return El resultado del factorial
 *
 */
long long int CalcularFactorial(int Operando)
{
    long long int Factorial = 1;
    int i;

    for(i=Operando; i>1; i--)
    {
        Factorial *= i;
    }

    return Factorial;
}

//////////////////////////////////////////////



