#include<stdio.h>
#include<stdlib.h>


int main() {

    int num, cont = 1;

    printf("Digite a quantidade de loops: ");
    scanf("%d", &num);

    while (cont <= num) {
        printf("Repetiu: %d vezes \n", cont);
        cont++;
    }
    

    system("pause");
    return 0;
    
}