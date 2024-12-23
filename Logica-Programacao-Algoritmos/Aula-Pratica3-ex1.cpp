#include<stdio.h>
#include<stdlib.h>


int main() {

    float nota[3];

    nota[0] = 5;
    nota[1] = 7.5;
    nota[2] = 6;
    nota[3] = 9.5;

    printf("Primeiro Semestre: %.1f \n Segundo Semestre: %.1f \n Terceiro Semestre: %.1f \n Quarto Semestre: %.1f \n", nota[0], nota[1], nota[2], nota[3]);

    system("pause");
    return 0;
}