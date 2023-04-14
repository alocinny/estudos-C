/*
## resto da divisão (modulo) ##
representado por %

a divisão inteira

quando realizamos uma divisão de duas variáveis inteiras, a parte fracionária é eliminada de forma automática, ou então é "truncada"

como a parte fracionária é descartada, temos que o resultado de uma divisão interia é sempre um número inteiro.

pro exemplo:

7/2 tem como resultado 3 e não 3,5, que é um número real.

2/3 é igual a zero e não 0,666.

o operador % retorna o resto da divisão de um número por outro. Resto da divisão.

5 % 2 = 1
4 % 2 = 0

em alguns casos, este operador é bastante útil.

por exemplo, em algumas aplicações é necessário extrair digitos de um valor inteiro. 

*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int n1, result, result2;

    printf("informe o primeiro valor: ");
    scanf("%d", &n1);

    result = n1 % 10;
    result2 = n1 / 10;

    printf("resultado: %d\n", result);
    printf("resultado: %d\n", result2);

    system("pause");
    return 0;
    
}