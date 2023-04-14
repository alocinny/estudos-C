#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    printf("Olá, aqui é um exemplo de acentuação\n");
    
    system("pause");
    return 0;
}