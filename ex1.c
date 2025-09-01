#include <stdio.h>

int main() {
    char nome[50];
    float salario_bruto, impostos, vale, salario_liquido;
    float emprestimo = 0, salario_final;

    printf("Digite o nome do funcionario: ");
    scanf(" %[^\n]", nome); 
    printf("Digite o salario bruto: R$ ");
    scanf("%f", &salario_bruto);
    printf("Digite o valor dos impostos: R$ ");
    scanf("%f", &impostos);

    printf("Digite o valor do vale: R$ ");
    scanf("%f", &vale);
    salario_liquido = salario_bruto - impostos - vale;
    if (salario_liquido > 0) {
        emprestimo = salario_liquido * 0.3;
    }
    salario_final = salario_liquido + emprestimo;

    printf("\n===== FOLHA DE PAGAMENTO =====\n");
    printf("Funcionario: %s\n", nome);
    printf("Salario Bruto: R$ %.2f\n", salario_bruto);
    printf("Impostos: R$ %.2f\n", impostos);
    printf("Vale: R$ %.2f\n", vale);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);
    printf("Valor do Emprestimo: R$ %.2f\n", emprestimo);
    printf("Salario Final (Liquido + Emprestimo): R$ %.2f\n", salario_final);

    return 0;
}
