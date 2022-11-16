#include <stdio.h>

int main(){
    int a, b, x, y, mdc;

    printf("Digite A: ");
    scanf("%d", &x);

    printf("Digite B: ");
    scanf("%d", &y);

    if (x > y){
        a = x;
        b = y;
    }

    else{
        a = y;
        b = x;
    }

    while (a != 0 && b != 0){
        a -= b;
        b -= a;
    }

    if (a == 0){
        mdc = b;
    }

    else{
        mdc = a;
    }

    printf("O MDC de %d e %d = %d", x, y, mdc);
}