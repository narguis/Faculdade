#include <stdio.h>

int maiormenor(){
    int i = 0;
    int x, maior, menor;
    while (i < 5){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &x);
        if (i == 0){
            maior = x;
            menor = x;
        }
        else if (x > maior){
            maior = x;
        }
        else if (x < menor){
            menor = x;
        }
    i++;
    }
printf("O maior numero foi %d e o menor foi %d.", maior, menor);
}

int main(){
    maiormenor();
}