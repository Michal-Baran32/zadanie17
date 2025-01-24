#include <studio.h>

float cuboit_volume(float a, float b, float h) {
        return(a*b*h);
}
int main(){
    float a, b, h;

    printf("Podaj dlugosc podstawy prostopadloscianu: ");
    scanf("%f", &a);

    printf("podaj szerokosc podstawy prostopadloscianu: ");
    scanf("%f", &b);

    printf("podaj wysokosc prostopadloscianu: ");
    scanf("%f", &h);

    printf("\nObietosc prostopadloscianu: &f\n", cuboid_volume(a, b, h) );

    return(0);



}
