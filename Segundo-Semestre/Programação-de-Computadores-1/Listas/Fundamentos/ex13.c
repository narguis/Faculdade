#include <stdio.h>

int main(){
    int n;
    int i = 1;
    int soma = 0;
    printf("Digite n: ");
    scanf("%d", &n);

    while (i <= n/2)
    {
        if (n % i == 0){
            soma += i;
        }
    i++;
    }

    if (soma == n){
        printf("O numero %d e perfeito.", n);
    }

    else{
        printf("O numero %d nao e perfeito.", n);
    }
}