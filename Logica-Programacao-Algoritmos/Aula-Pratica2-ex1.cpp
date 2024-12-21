#include<stdio.h>
#include<stdlib.h>


int main() {
    float n1, n2, media;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);

    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    if (media >= 7) {

        printf("O aluno foi aprovado! \n");
    } else{
        printf("O aluno foi reprovado! \n");
    }


    printf("Media: %.2f \n\n", media); 


    system("pause");
    return 0;

}