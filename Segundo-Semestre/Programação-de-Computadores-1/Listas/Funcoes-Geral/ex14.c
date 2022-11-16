int duracao(int hora1, int min1, int hora2, int min2){
    int min = min2 - min1;
    int hora = hora2 - hora1;

    if (hora2 < hora1){
        hora = (24 - hora1) + hora2;
    }

    if (min < 0){
        min += 60;
        hora -= 1;
    }
printf("O jogo durou %dh%d.", hora, min);    
}

int main(){
    duracao(23, 45, 8, 56);
    return 0;
}