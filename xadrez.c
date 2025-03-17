#include <stdio.h>

int main() {
    // Movimento da Torre usando "for" (5 casas para a direita)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Movimento do Bispo usando "while" (5 casas na diagonal "Cima, Direita")
    printf("\nMovimento do Bispo:\n");
    int casasBispo = 1;
    while (casasBispo <= 5) {
        printf("Casa %d: Cima, Direita\n", casasBispo);
        casasBispo++;
    }

    // Movimento da Rainha usando "do-while" (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    int casasRainha = 1;
    do {
        printf("Casa %d: Esquerda\n", casasRainha);
        casasRainha++;
    } while (casasRainha <= 8);

    return 0;
}
