#include <stdio.h>
#include <stdlib.h>


int menor(int a, int b){
    if(a < b){
        return a;
    } else {
        return b;
    }
}

int main(){
    int x, y, z;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    printf("Digite o valor de Z: ");
    scanf("%d", &z);

    
    int resultado = menor(menor(x, y), z);

    printf("O menor número é: %d\n", resultado);

    return 0;
}
