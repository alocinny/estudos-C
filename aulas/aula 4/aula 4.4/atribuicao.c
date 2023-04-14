/*
    operadores compostos de atribuição

    os operadores compostos de atrubuição: +=, -=, /=, são muito utilizados em expressões matemáticas como atalhos. Por exemplo: ao invés de escrever: num = num + 5;
    pode-se utilizar a seguinte expressão: num += 5;

    outros exemplos de utilização:
    num -= 1; // equivale a num = num - 1;
    num *= 2 // equivale a num = num * 2;
    num /= 2 // equivale a num = num / 2;
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float numero;

    printf("informe o primeiro valor: ");
    scanf("%f", &numero);

    numero /= 6;

    printf("resultado: %.2f\n", numero);

    system("pause");
    return 0;
    
}