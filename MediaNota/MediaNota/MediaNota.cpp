#include<stdio.h>
#include<stdlib.h>

int main()  {

	float nota1, nota2, media;

	printf("Digite a primeira nota:");
	scanf_s("%f", &nota1);

	printf("Digite a segunda nota:");
	scanf_s("%f", &nota2);

	media = (nota1 + nota2) / 2;

	if (media >= 7) {

		printf("Voce foi aprovado!\n Parabens!\n");

	}
		
	else {
		printf("Reprovado :/\n");
	}

	printf("Media = %.1f\n", media);

	system("pause");
	return 0;
}