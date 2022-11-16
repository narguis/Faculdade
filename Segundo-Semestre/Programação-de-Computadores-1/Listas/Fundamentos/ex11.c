#include <stdio.h>

int main(){
    int n;
    int i = 2;
    int div = 0;
    printf("Digite n: ");
    scanf("%d", &n);

    while (i <= n/2)
    {
        if (n % i == 0){
            div += 1;
        }
    i++;
    }

    
    if (div == 0){
        printf("O numero %d e primo.", n);
    }

    else{
        printf("O numero %d nao e primo e tem %d divisores.", n, div+2);
    }

}