#include <stdio.h>
#include <math.h>

float bhask(int a, int b, int c){
    float delta = pow(b, 2)-4 * a * c;

    if (delta > 0){
        float x1, x2;
        x1 = (-b + sqrt(delta)) / 2 * a;
        x2 = (-b - sqrt(delta)) / 2 * a;
        printf("X1 = %.2f \nX2 = %.2f\n", x1, x2);
    }
    else if (delta == 0){
        float x;
        x = -b / 2 * a;
        printf("X = %.2f\n", x);
    }
    else{
        printf("A equacao nao possui solucao.\n");
    }
}

int ex04(){
    bhask(1, -5, 6);
    bhask(8, -3, 7);
    bhask(4, 4, 1);
}