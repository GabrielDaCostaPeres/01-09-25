
#include <stdio.h>

int main()
{
    int cont = 0, soma = 0;
    int i,inicio,fim;
    printf("Valor inicial: ");
    scanf("%d", &inicio);
    printf("Valor final: ");
    scanf("%d", &fim);
    for (i = inicio; i <= fim; i++)
    {
        printf("%d\n", i);
        soma += i;
        cont++;
    }
    printf("Quantidade: %d\n", cont);
    printf("Somatoria: %d\n", soma);
    printf("Media: %.2f\n", (float)soma / cont);
}
