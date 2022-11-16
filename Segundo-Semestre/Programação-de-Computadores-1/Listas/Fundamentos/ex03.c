#include <stdio.h>

int main(){
    int x, n;
    x = n = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while (x < n){
        x += 1;
        if (x % 2 != 0){
            printf("%d\n", x);
        }
    }

return 0;
}