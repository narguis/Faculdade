#include <stdio.h>
#include <math.h>

int main(){
    int x, n, y;

    printf("Digite uma base x: ");
    scanf("%d", &x);

    printf("Digite um expoente n: ");
    scanf("%d", &n);

    y = pow(x, n);

    printf("%d elevado a %d e igual a %d", x, n, y);

    return 0;
}