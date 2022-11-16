#include <stdio.h>

float media(float a, float b, float c, char m){
    float med;

    if (m == 'A'){
        med = (a + b + c)/3;
    }

    else if (m == 'P'){
        med = ((a * 5) + (b * 3) + (c * 2))/10;
    }

    else{
        med = 3/((1/a) + (1/b) + (1/c));
    }
    return med;
}

int ex02(){
    printf("%.2f", media(6, 5.5, 8, 'H'));
    return 0;
}
