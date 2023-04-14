/*
    operadores de auto-incremento e auto-decremento

    ++ auto-incremento => aumenta uma unidade no valor da variável
    utilizar x++ equivale a fazer x = x + 1; ou seja, soma uma unidade ao valor de x

    -- auto-decremento => diminui uma unidade no valor da variável
    utilizar x-- equivale ao valor de x = x - 1; ou seja, subtrai uma unidade ao valor de x.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int numero;

    printf("informe o primeiro valor: ");
    scanf("%d", &numero);

    numero--;

    printf("resultado: %d \n", numero);

    system("pause");
    return 0;
}