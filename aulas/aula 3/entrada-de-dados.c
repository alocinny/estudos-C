    /* ENTRADA DE DAODS:
    - TEM POR FUNÇÃO EFETUAR A LEITURA DE DADOS DE UMA FONTE EXTTERNA.

    FUNÇÃO SCANF():
    - É UTILIZADA PARA FAZER A LEITURA DE DADOS FORMATADOS VIA TECLADO.

    SINTAXE:
    - SCANF("EXPRESSÃO DE CONTROLE", LISTA DE ARGUMENTOS); ==> DEFINIMOS AS EXPRESSÕES DE CONTROLE COM ESPECIFICADORES DE FORMATO

    EXEMPLO:
    - SCANF("%F", &SALÁRIO); ["&" PRECISA SEMPRE ESTAR PRESENTE]

    EXPLICAÇÃO: ESSE COMANDO EFETUA UMA LEITURA DO TEcLADO ONDE É ESPERADA UMA VARIÁVEL FLOAT (INDICADA POR "%F"). O VALOR LIDO SERÁ ARMAZENADO NO ENDEREÇO DA VARIÁVEL SALÁRIO.

    NA LISTA DE ARGUMENTOS DEVEMOS INDICAR OS ENDEREÇOS DAS VARIÁVEIS. PARA FAZER ISSO ADICIONAMOS O SÍMBOLO "&" COMO PREFIXO NA FREENTE DO NOME DA VARIÁVEL.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero1, numero2, soma;

    printf("informe o primeiro numero:");
    scanf("%f", &numero1);

    printf("informe o segundo numero:");
    scanf("%f", &numero2);

    soma = numero1 + numero2;

    //10 + 20 = 30
    printf("%.2f + %.2f = %.2f\n", numero1, numero2, soma);

    system("pause");
    return 0;
}