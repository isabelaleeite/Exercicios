#include<stdio.h>
#include<stdlib.h>


int main() {

	int opcao;

	printf("Digite um numero entre 1 e 7: \n\n");
	scanf_s("%d", &opcao);

	switch (opcao)

	{
	
	case 1 :
		printf("O dia escolhido foi Domingo \n\n");
		break;
	case 2 :
		printf("O dia escolhido foi Segunda \n\n");
		break;
	case 3:
		printf("O dia escolhido foi Terca \n\n");
		break;
	case 4:
		printf("O dia escolhido foi Quarta \n\n");
		break;
	case 5:
		printf("O dia escolhido foi Quinta \n\n");
		break;
	case 6:
		printf("O dia escolhido foi Sexta \n\n");
		break;
	case 7:
		printf("O dia escolhido foi Sabado \n\n");
		break;
	
	default:
		
		printf("\nNao existe o dia da semana para esse numero\n\n");
		
		break;

	
	}

	system("Pause");

	return 0;

}


