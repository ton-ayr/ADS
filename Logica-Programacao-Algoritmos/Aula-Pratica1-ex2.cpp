#include<stdio.h>
#include<stdlib.h>

int main() {
    int n1, n2;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);

    printf("Agora, digite o segundo numero: \n");
    scanf("%d", &n2);

    if(n1 > n2) {
        printf("O primeiro numero e maior que o segundo! \n");
    }else{
        printf("O segundo numero e maior que o primeiro! \n");
    }

    printf("Voce digitou os numeros %d e %d ", n1, n2);

    system("pause");
    return 0;

}