#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1;

    printf("Digite um numero para identificar o dia da semana correspondente: \n");
    scanf("%d", &n1);

    switch (n1){
case 1:
printf("O dia escolhido foi Domingo! \n\n");
    break;
case 2:
printf("O dia escolhido foi Segunda! \n\n");
    break;
case 3:
printf("O dia escolhido foi Terca! \n\n");
    break;
case 4:
printf("O dia escolhido foi Quarta! \n\n");
    break;
case 5:
printf("O dia escolhido foi Quinta! \n\n");
    break;
case 6:
printf("O dia escolhido foi Sexta! \n\n");
    break;
case 7:
printf("O dia escolhido foi Sabado! \n\n");
    break;

default:
printf("O dia escolhido e invalido para a semana! \n\n");
    break;
}

    system("pause");
    return 0;

}
