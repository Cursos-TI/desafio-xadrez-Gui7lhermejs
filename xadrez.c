#include <stdio.h>

int main() {

    //Torre
    printf("Movimento da Torre!\n");
        for (int torre = 1; torre <= 5; torre++ ) {
            printf("Direita\n");
        }
    
    //Bispo
    printf("Movimentação do Bispo!\n");
        for (int bispo = 1; bispo <= 5; bispo++) {
            printf("Cima\n");
            printf("Direita\n");
        }

    //Rainha
    printf("Movimentação da Rainha!\n");
        for (int rainha = 1; rainha <= 8; rainha++) {
            printf("Esquerda\n");
        }

    return 0;
}
