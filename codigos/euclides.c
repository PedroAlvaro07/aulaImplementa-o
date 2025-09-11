#include <stdio.h>

int main() {
    int a, b, resto;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    // Algoritmo de Euclides
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    printf("O MDC eh: %d\n", a);

    return 0;
}
