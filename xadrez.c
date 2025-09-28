#include <stdio.h>

int main() {
    
    //Interação com usuario

    int opcao;

    
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("Qual peça você quer movimentar?: ");
        scanf("%d", &opcao);

    switch (opcao) {

    
    case 1:
    //Torre
    
    printf("Movimento da Torre!\n");
        for (int torre = 1; torre <= 5; torre++ ) {
            printf("Direita\n");
        }
    break;

    case 2:
    //Bispo
    
    printf("Movimentação do Bispo!\n");
        for (int bispo = 1; bispo <= 5; bispo++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    break;
    
    case 3:
    //Rainha

    printf("Movimentação da Rainha!\n");
        for (int rainha = 1; rainha <= 8; rainha++) {
            printf("Esquerda\n");
        }
    break;

    case 4:
    //Cavalo
    printf("Movimentação do Cavalo!\n");    
        for (int cavalo = 1; cavalo <= 1; cavalo++){
            for (int cavalo2 = 1; cavalo2 <= 2; cavalo2++ ) {
                printf("Cima\n");
            } 
            printf("direita\n");
        }
    break;
    }

    return 0;
}
