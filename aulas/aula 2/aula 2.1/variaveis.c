   /*o que é uma variável?
   - Variável é um local reservado na memória para armazenas um tipo de dado.
   - Toda variável deve ter um identificador, ou seja, um nome.
   - Além de ter um nome, a variável também precisa ter um tipo.
   - O tipo de uma variável determina o que ela é capaz de armazenar.

   Podemos dizer que os principais tipos de dados númericos dividem-se em:
   Inteiro: armazena números inteiros
   Real: armazena números com casas decimais, são as variáveis de ponto flutuante;

   int: armazena valores númericos inteiros.
   char: armazena caracteres.
   float: armazena números com pontos flutuantes (reais) com precisão simples.
   double: armazena números com ponto flutuante, com precisão dupla, ou seja, normalmente possui o dobro da capacidade de uma variável do tipo float.
   
   PODEMOS:
   - Tipo nome; => int quantidade;
   - Tipo nome= valor; => int quantidade = 10;
   - Tipo nome1, nome2; => float nota1, nota2;
   - Tipo nome1 = valor, nome2 = valor; => float nota1 = 1.3, nota 2 = 8.7
   
   NÃO PODEMOS FAZER:
   - Tipo 1nome; (não pode ter número no começo do identificador)
   - Tipo fração; (não pode usar caracteres especiais)
   - Tipo nome; (não pode ter o nome de uma variável já existente)
   - Tipo valor-total; (não pode usar caractere especial, só pode o _)*/

 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
    int numero1 = 10;
    int numero2 = 20;
    int soma = numero1 + numero2;

    //Especificador de formato
    //int ==> %d
    //float ==> %f
    //char ==> %c

    printf("O valor da variavel numero: %d", soma);

    printf("\n");
    system("pause");
    return 0;
 }