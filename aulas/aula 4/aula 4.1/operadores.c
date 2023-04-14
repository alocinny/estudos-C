/*Operadores aritiméticos:
Os operadores aritméticos são símbolos utilizados para realizar as operações aritméticas elementares.
+ -> adição 
- -> subtração
* -> multiplicação
/ -> divisão
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, result;

    printf("informe o primeiro valor: ");
    scanf("%f", &n1);

    printf("informe o segundo valor: ");
    scanf("%f", &n2);

    result = n1 * n2;

    printf("o resultado da multiplicacao %.2f * %.2f e igual a: %.2f\n", n1, n2, result);
     
    system("pause");
    return 0;
}