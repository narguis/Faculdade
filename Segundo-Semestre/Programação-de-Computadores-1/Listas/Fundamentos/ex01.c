#include <stdio.h>
#include <math.h>

int main()
{
    int x, quadrado;
    printf("Digite um numero, ou digite 0 para parar: ");
    scanf("%d", &x);

    while (x != 0)
    {
        quadrado = pow(x, 2);
        printf("O quadrado de %d e %d\n", x, quadrado);
        printf("Digite outro numero, ou 0 para parar: ");
        scanf("%d", &x);
    }

    return 0;
}