#include <stdio.h>

float cuboid_volume(float a, float b, float h) {
        return(a*b*h);

}

float sphere_volume(float r) {
        return(4.0/3.0*3.14*r*r*r);

}



int main(){


    float a, b, h;
    float r;
    int command;

while(1){
    printf("0 - wyjscie\n");
    printf("1 - obietosc prostopadloscianu\n");
    printf("2 - obietosc kuli\n");

    scanf("%1d", &command);


    if (command == 1) {

        printf("Podaj dlugosc podstawy prostopadloscianu: ");
        scanf("%f", &a);

        printf("podaj szerokosc podstawy prostopadloscianu: ");
        scanf("%f", &b);

        printf("podaj wysokosc prostopadloscianu: ");
        scanf("%f", &h);

        printf("\nObietosc prostopadloscianu: %f\n", cuboid_volume(a, b, h) );



    }


    else if (command == 2){
        printf("Podaj promien kuli: ");
        scanf("%f", &r);

        printf("\nObietosc kuli: %f\n", sphere_volume(r));



}
    else if (command == 0){
        printf("koniec programu\n");

        return (0);
    }
}
}
