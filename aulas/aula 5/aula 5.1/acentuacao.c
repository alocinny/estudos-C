#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    printf("Ol�, aqui � um exemplo de acentua��o\n");
    
    system("pause");
    return 0;
}