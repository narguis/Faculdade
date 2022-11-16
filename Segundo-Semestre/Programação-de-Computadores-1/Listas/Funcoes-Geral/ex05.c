#include <stdio.h>

int fabrica(int s){
    int hora = 0;
    int min = 0;
    int seg = 0;
    printf("%d segundos e igual a ", s);
    while (s >= 3600){
        s -= 3600;
        hora += 1;
    }
    printf("%d HORAS, ", hora);

    while (s >= 60){
        s -= 60;
        min += 1;
    }
    printf("%d MINUTOS E ", min);

    if (s > 0){
        seg += s;
    }
    printf("%d SEGUNDOS.", seg);
}

int main(){
    fabrica(458053);
}