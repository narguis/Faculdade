#include <stdio.h>

int fatorial(int n){
    int i = n-1;
    while(i > 0){
        n *= i;
        i--;
    }
return n;
}

int main(){
    printf("%d", fatorial(3));
}