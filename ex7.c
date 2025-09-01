 
 #include <stdio.h>

int main() {
 int inicio, fim,i;
    printf("Valor inicial: ");
    scanf("%d", &inicio);
    printf("Valor final: ");
    scanf("%d", &fim);
    for(i = inicio; i <= fim; i++) {
        if(i % 2 == 0) printf("%d PAR\n", i);
        else printf("%d IMPAR\n", i);
    }
}
