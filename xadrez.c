#include <stdio.h>

//Voids

void torre() {
    
    int n;

    printf("Quantas casas deseja mover a Torre? (Max 8):  ");
        scanf("%d", &n);

    printf("Movimento da Torre!\n");
        for (int torre = 1; torre <= n; torre++ ) {
            printf("Direita\n");
    }
}

void bispo() {

    int n;

    printf("Quantas casas deseja mover a Bispo? (Max 8):  ");
        scanf("%d", &n);

    printf("Movimentação do Bispo!\n");
        for (int bispo = 1; bispo <= n; bispo++) {
            printf("Cima\n");
            printf("Direita\n");
    }
}

void rainha() {

    int n;

    printf("Quantas casas deseja mover a Rainha? (Max 8):  ");
        scanf("%d", &n);

    printf("Movimentação da Rainha!\n");
        for (int rainha = 1; rainha <= n; rainha++) {
            printf("Esquerda\n");
    }
}

void cavalo() {
    printf("Movimentação do Cavalo!\n");    
        for (int cavalo = 1; cavalo <= 1; cavalo++){
            for (int cavalo2 = 1; cavalo2 <= 2; cavalo2++ ) {
                printf("Cima\n");
            }
            printf("direita\n");
        }
}

int main() {
    
    //Interação com usuario

    int opcao;

    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("Qual peça você quer movimentar?:");
        scanf("%d", &opcao);

    switch (opcao) {

    
    case 1:
    //Torre
        
    torre();

    break;

    case 2:
    //Bispo
    
    bispo();

    break;

    case 3:
    //Rainha

    rainha();

    break;

    case 4:
    //Cavalo
        
    cavalo();

    break;

    }

    return 0;
}
