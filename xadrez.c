#include <stdio.h>

#define MOVIMENTO_TORRE 5
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_RAINHA 8
#define MOVIMENTO_CAVALO_VERTICAL 2
#define MOVIMENTO_CAVALO_HORIZONTAL 1


void moveTorreRec(int passo) {
    if (passo == 0) return;
    printf("Direita\n");
    moveTorreRec(passo - 1);
}


void moveBispoRec(int passo) {
    if (passo == 0) return;
    printf("Cima Direita\n");
    moveBispoRec(passo - 1);
}


void moveRainhaRec(int passo) {
    if (passo == 0) return;
    printf("Esquerda\n");
    moveRainhaRec(passo - 1);
}


void moveCavalo() {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < MOVIMENTO_CAVALO_VERTICAL; i++) {
        printf("Cima\n");
    }
    int j = 0;
    while (j < MOVIMENTO_CAVALO_HORIZONTAL) {
        printf("Direita\n");
        j++;
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moveTorreRec(MOVIMENTO_TORRE);

    printf("\nMovimento do Bispo:\n");
    moveBispoRec(MOVIMENTO_BISPO);

    printf("\nMovimento da Rainha:\n");
    moveRainhaRec(MOVIMENTO_RAINHA);

    moveCavalo();

    return 0;
}
