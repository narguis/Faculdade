#include <stdio.h>

float fracfat(int n){
    int mmc; 
    int fatn = n;
    int i = 1;
    int j = 1;

    while (j < n){
        fatn *= j;
        j++;
    }

    while (1){
        if(i % 6 == 0 && i % fatn == 0){
            mmc = i;
            break;
        }
        i++;
    }

    float result = 2 * mmc + (mmc/2) + (mmc/6) + (mmc/fatn);

    return result;
}

int main(){
    printf("%.2f", fracfat(5));
}