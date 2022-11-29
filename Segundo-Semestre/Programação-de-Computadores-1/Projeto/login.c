#include <stdio.h>
const int MAX = 100;
int cadastrados = 0;

typedef struct login{
    char usuario[10]; 
    char senha[10];
}Cliente;

Cliente clientes[MAX];


int cadastro(Cliente clientes[], int cad){
    char usuario[10];
    char senha[10];
    printf("Novo Usuário: ");
    scanf("%s", &usuario);
    clientes[cad].usuario = usuario;
    
    return cad;
}


void login(char usuario[], char senha[], char clientes[]){

}