#include <stdio.h>

int idade(int anos, int meses, int dias){
    return (anos*365) + (meses*30) + dias;
}

int main(){
    printf("Voce tem %d dias de idade.", idade(18, 3, 16));
}