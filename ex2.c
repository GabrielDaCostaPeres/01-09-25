#include <stdio.h>
#include <string.h>

int main() {
    char cargo[20];
    float salario, bonus = 0;

    printf("Cargo: ");
    scanf(" %[^\n]", cargo);
    printf("Salario: ");
    scanf("%f", &salario);

    if (strcmp(cargo, "Entregador") == 0 && salario <= 1500) bonus = salario * 0.10;
    else if (strcmp(cargo, "Vendedor") == 0 && salario <= 3800) bonus = salario * 0.08;
    else if (strcmp(cargo, "Supervisor") == 0 && salario <= 5500) bonus = salario * 0.06;
    else if (strcmp(cargo, "Gerente") == 0 && salario <= 8700) bonus = salario * 0.05;
    else if (strcmp(cargo, "Dono") == 0 && salario <= 15000) bonus = salario * 0.03;

    printf("Bonus: R$ %.2f\n", bonus);
    return 0;
}
