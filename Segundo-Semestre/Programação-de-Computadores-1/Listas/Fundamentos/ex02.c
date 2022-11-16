#include <stdio.h>

int main() {
    int n, x, y;
    x = y = 0;

    printf("Digite um valor: ");
    scanf("%d", &n);

    while (x < n){
        x += 1;
        y += x;
    }
    printf("A soma dos %d primeiros numeros positivos e %d", n, y);
return 0;
}