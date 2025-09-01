#include <stdio.h>

int main() {
    char petNome[30], petRaca[30];
    int i;
    printf("Nome do pet: ");
    scanf("%s", petNome);
    printf("Raca do pet: ");
    scanf("%s", petRaca);
    for(i = 1; i <= 15; i++) {
        printf("%d - O Pet %s e um %s.\n", i, petNome, petRaca);
    }
}