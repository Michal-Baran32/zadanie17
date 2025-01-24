#include <stdio.h>

float cuboit_volume(float a, float b, float h) {
        return(a*b*h);

}

float sphere_volume(float r) {
        return(4.0/3.0*3.14*r*r*r);

}


int main(){

    float a, b, h;

   // printf("Podaj dlugosc podstawy prostopadloscianu: ");
   // scanf("%f", &a);

   // printf("podaj szerokosc podstawy prostopadloscianu: ");
   // scanf("%f", &b);

   // printf("podaj wysokosc prostopadloscianu: ");
   // scanf("%f", &h);

   // printf("\nObietosc prostopadloscianu: &f\n", cuboid_volume(a, b, h) );

   // return(0);


    float r;

    printf("Podaj promien kuli: ");
    scanf("%f", &r);

    printf("\nObietosc kuli: &f\n", sphere_volume(r));

    return (0);

}
