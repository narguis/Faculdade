#include <stdio.h>

int swap(int a, int b, int vet[3]){
    int i = 0;
    int n = 0;
    int temp = 0;
    int temp2 = 0;
    while (i < 3){
        if (vet[i] == a){
                temp = vet[i];
                break;
            }
            i++;
        }
        while (i < 3){
            if (vet[n] == b){
                temp2 = vet[n];
                break;
            }
            n++;
        }
        vet[i] = temp2;
        vet[n] = temp;
        return vet;
    }

int crescente(int a, int b, int c){
    int temp;
    int num[3] = {a, b, c};

    if (a > c){
        swap(a, c, num);
        temp = a;
        a = c;
        c = temp;
    }

    if(a > b){
        swap(a, b, num);
        temp = a;
        a = b;
        b = temp;
    }

    if(b > c){
        swap(b, c, num);
        temp = b;
        b = c;
        c = b;
    }

    printf("%d -> %d -> %d\n", num[0], num[1], num[2]);

}

int main(){
    crescente(5, 7, 1);
    return 0;
}