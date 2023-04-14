#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, soma;

    printf("informe o primeiro numero:");
    scanf("%d", &numero1);

    printf("informe o segundo numero:");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    //10 + 20 = 30
    printf("%d + %d = %d\n", numero1, numero2, soma);

    system("pause");
    return 0;
    
}