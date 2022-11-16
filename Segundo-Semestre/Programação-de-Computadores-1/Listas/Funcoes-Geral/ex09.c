int somatorio(int n){
    int i = 0;
    int soma = 0;
    while (i <= n){
        soma += i;
        i++;
    }
return soma;
}

int main(){
    printf("%d", somatorio(9));
}