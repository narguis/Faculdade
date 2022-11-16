#include <stdio.h>

int tabuada(int n){
    int i = 1;
    while(i <= n){
        printf("%d X %d = %d\n", i, n, i*n);
        i++;
    }
}

int main(){
    tabuada(17);
}