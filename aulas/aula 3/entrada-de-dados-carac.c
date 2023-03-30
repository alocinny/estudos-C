#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    
    printf("Informe a letra inicial do seu nome:");
    scanf("%c", &letraInicial);

    printf("A letra inicial do seu nome eh: %c\n", letraInicial);

    system("pause");
    return 0;
}