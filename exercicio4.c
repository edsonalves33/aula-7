#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, resposta, pontos = 0;
    srand(time(NULL));

    while (1) {

        a = rand() % 10;
        b = rand() % 10;

        printf("Quanto é %d + %d ?", a, b);
        scanf("%d", &resposta);

        if (resposta == a + b) {
            pontos++;
            printf("Correto! Pontos: %d\n\n", pontos);
        } else {
            printf("Errado! A resposta certa era %d.\n", a + b);
            printf("Você fez %d pontos.\n", pontos);
            break;
        }
    }
    return 0;
}