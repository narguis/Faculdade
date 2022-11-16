#include <stdio.h>
#include <stdbool.h>

bool parimpar(int n){
    int i = 1;
    bool par;
    if (n % 2 == 0){
        par = true;
    }
    else{
        par = false;
    }
i++;
return par;
}

int main(){
    printf("%s", parimpar(11) ? "True" : "False");
}