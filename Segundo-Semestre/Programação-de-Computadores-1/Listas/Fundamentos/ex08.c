#include <stdio.h>

int main(){
    int n, i;
    int f = 1;
    printf("Digite n: ");
    scanf("%d", &n);
    i = n;

    while(i > 0){
        f *= i;
        i--;
    }

    printf("O fatorial de %d = %d", n, f);

}