#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int numero() {
    return rand() % 10;
}

int main() {
    srand(time(NULL)); 

    int a = numero();
    int b = numero();
    int resposta;

    printf("Resolva a soma: %d + %d = ", a, b);
    scanf("%d", &resposta);

    if (resposta == a + b) {
        printf("Parabéns! Você acertou.\n");
    } else {
        printf("Que pena você errou" );

    return 0;
}
}