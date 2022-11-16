#include <stdio.h>

int main(){
    int n, i, j;
    int x = 0;
    int cont = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Digite o primeiro múltiplo: ");
    scanf("%d", &i);
    
    printf("Digite o segundo múltiplo: ");
    scanf("%d", &j);


    while(x < n){
        if (cont % i == 0 || cont % j == 0){
            printf("%d, ", cont);
            x++;
        }
        cont++;
    }
}