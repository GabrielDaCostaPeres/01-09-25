#include <stdio.h>

int main() {

    char nome[50];
    float trabalho, somaTrabalhos = 0, prova, media;
    int i;
    printf("Nome do aluno: ");
    scanf("%s", nome);
    for(i = 1; i <= 5; i++) {
        printf("Nota do trabalho %d: ", i);
        scanf("%f", &trabalho);
        somaTrabalhos += trabalho;
    }
    printf("Nota da prova: ");
    scanf("%f", &prova);
    media = (somaTrabalhos + prova) / 2;
    printf("Aluno: %s\nMedia: %.2f\nSituacao: ", nome, media);
    if(media >= 0.0 && media <= 3.9) printf("Reprovado\n");
    else if(media <= 5.9) printf("Recuperacao\n");
    else printf("Aprovado\n");
}

