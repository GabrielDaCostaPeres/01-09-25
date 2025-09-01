
#include <stdio.h>

int main() {
int a, b, c;
    printf("Digite tres valores: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a >= b && a >= c) printf("Maior: %d\n", a);
    else if(b >= a && b >= c) printf("Maior: %d\n", b);
    else printf("Maior: %d\n", c);
}

