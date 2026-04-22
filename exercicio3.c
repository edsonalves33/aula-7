#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int chute, limite = 5;
    int numero = rand() % limite;

    printf("Digite um número entre 0 e %d: ", limite - 1);
    scanf("%d", &chute);

    while (chute != numero) {
        printf("Errou! Tente novamente: ");
        scanf("%d", &chute);
    }

    printf("Parabéns, você acertou!" );

    return 0;
}
