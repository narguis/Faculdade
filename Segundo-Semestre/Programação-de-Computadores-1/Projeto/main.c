#include <stdio.h>


typedef struct login{
    char usuario[10]; 
    char senha[10];
}Cliente;



int cadastro(Cliente clientes[], int cad){
    char usuario[10];
    char senha[10];
    printf("Novo Usuário: ");
    scanf("%s", clientes[cad].usuario);
   // clientes[cad].usuario = usuario;
    
    printf("Nova senha: ");
    scanf("%s", &*senha);
    return clientes;
}



void login(char usuario[], char senha[], char clientes[]){

}

int main(){

    const int MAX = 100;
    int cadastrados = 0;
    Cliente clientes[MAX];
    cadastro(clientes, cadastrados);
    

    printf("%s", clientes[0].usuario);
}