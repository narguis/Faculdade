#include <stdio.h>
#include <stdbool.h>

bool perfeito(int n){
    int i = 1;
    int soma = 0;
    bool perf;
    while (i <= n/2){
       if (n % i == 0){
            soma += i;
        }
    i++;
    }
    if (soma == n){
        perf = true;
    }
    else{
        perf = false;
    }
return perf;
}

int main(){
    printf("%s", perfeito(6) ? "True" : "False");
}