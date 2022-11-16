#include <stdio.h>

int divisores(int n){
    int i = 1;
    int div = 0;
    while (i <= n/2){
        if(n % i == 0){
            div++;
        }
    i++;
    }
    div++;
return div;
}

int main(){
    printf("O numeo tem %d divisores.", divisores(30));
}
