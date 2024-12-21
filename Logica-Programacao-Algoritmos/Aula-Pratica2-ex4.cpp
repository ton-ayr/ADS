#include<stdio.h>
#include<stdlib.h>


int main() {
    int n1, n2, soma, sub, mult, div;

    printf("Digite o valor do primeiro numero: \n");
    scanf("%d", &n1);

    printf("Digite o valor do segundo numero: \n");
    scanf("%d", &n2);

    soma = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;

    printf("Segue o calculo desses valores: \n Soma: %d \n Subtracao: %d \n Multiplicacao: %d \n Divisao: %d \n", soma, sub, mult, div);

    system("pause");
    return 0;
    
}