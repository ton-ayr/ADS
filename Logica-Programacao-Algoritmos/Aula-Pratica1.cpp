#include<stdio.h>
#include<stdlib.h>

int main() {
	int idade;

	printf("Digite sua idade: ");
	scanf("%d", &idade);

	printf("\n\n %d anos? Achei que voce tinha %d anos \n\n", idade, idade * 2);

	system("pause");
	return 0;
}
