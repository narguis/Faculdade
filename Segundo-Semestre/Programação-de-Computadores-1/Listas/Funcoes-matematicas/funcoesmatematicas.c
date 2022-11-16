#include <stdio.h>
#include <math.h>

/*
** Retorna o valor da soma de dois numeros recebidos
*/
float soma(float x, float y){
    float som = x + y;
    return som; 
}
/*
** Retorna o valor da diferenca de dois numeros recebidos
*/
float subtracao(float x, float y){
    float sub = x - y;
    return sub;
}
/*
** Retorna o produto de dois numeros
*/
float produto(float x, float y){
    float prod = x * y;
    return prod;
}
/*
** Retorna o resultado da divisao do numero x pelo y,
** Quando y = 0 retornar 0 e imprimir "Erro: Divisao por zero
*/
float divisao(float x, float y){
    float div = x / y;
    if (y = 0){
        div = 0;
        printf("Erro: Divisao por zero.")
    }

    else{
        return div;
    }
}
/*
** Retorna o quadrado de um numero
*/
float quadrado(float x){
    float quad = pow(x, 2);
    return quad;
}
/*
** Retorna o cubo de um numero
*/
float cubo(float x){
    float cub = pow(x, 3);
    return cub;
}
/*
** Resto da divisao do numero x pelo y
*/
int restoDivisao(int x, int y){
    int resdiv = x % y;
    return resdiv;
}
/*
** Retorna 1 se o numero recebido for par, e 0 caso contrario
*/
int par(int x){
    int p;
    if (x % 2 == 0){
        p = 1;
    }

    else{
        p = 0;
    }

    return p;
}
/*
** Retorna 1 caso x seja multiplo de y e 0 caso contrario
*/
int multiplo(int x, int y){
    int m;

    if (y % x == 0){
        m = 1;
    }

    else{
        m = 0;
    }

    return m;
}
/*
** Retorna 1 caso x seja um numero primo e 0 caso contrario
*/
int primo(int x){
    int divs, p;
    int i = 1;
    for(i; i <= n/2; i++){
        if (x % i == 0){
            divs += 1;
        }
    }

    if (divs > 1){
        p = 0;
    }

    else{
        p = 1;
    }
}
/*
** Retorna um vetor com todos os divisores do numero x
*/
int* divisores(int x){
    int i;
    int n = 0;
    int divs[];
    for (i = 1; i <= n/2; i++){
        if (x % i == 0){
            divs[n] = i;
            n++;
        }
    }
}
