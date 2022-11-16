#include <stdio.h>
#include <math.h>
#define PI 3.1415926

float volume(int raio);

int ex01()
{
     printf("%.2f", volume(2));
}


float volume(int raio)
{
    float vol;
    vol = (4 * PI * pow(raio, 3))/3;
    return vol;

}
