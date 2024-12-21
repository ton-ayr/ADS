#include<stdio.h>
#include<stdlib.h>


int main() {

    int num, cont;

    printf("Digite a quantidade de loops: ");
    scanf("%d", &num);

    for (cont = 1; cont <= num; cont++) {
        printf("Repetiu: %d vezes \n", cont);
    }
    
    

    system("pause");
    return 0;
    
}