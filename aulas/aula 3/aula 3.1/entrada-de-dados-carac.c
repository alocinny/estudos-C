#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letraInicial;
    printf("Informe a letra inicial do seu nome:");
    scanf("%c", &letraInicial);

    printf("A letra inicial do seu nome eh: %c\n", letraInicial);

    system("pause");
    return 0;
}