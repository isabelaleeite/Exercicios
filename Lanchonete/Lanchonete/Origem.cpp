//Bibliotecas útilizadas
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>


void menu();

#define TOTAL_DE_PRODUTOS 10  //declaração da constante

int qtd[7], op;

int main()
{
	double total[TOTAL_DE_PRODUTOS],final = 0;
	char produtos[TOTAL_DE_PRODUTOS][20];
	setlocale(LC_ALL, "Portuguese"); // configura o idioma para português 

	menu();

	strcpy_s(produtos[0], "Cachorro-quente");
	strcpy_s(produtos[1], "X-salada");
	strcpy_s(produtos[2], "X-bacon");
	strcpy_s(produtos[3], "Misto");
	strcpy_s(produtos[4], "Salada");
	strcpy_s(produtos[5], "Água");
	strcpy_s(produtos[6], "Refrigerante");
	strcpy_s(produtos[7], "Refrigerante");

	printf("Escolha o produto: ");
	scanf_s("%i", &op);


	while ((op >= 1) && (op <= 7)) // Estrutura de repetição
	{
		switch (op) // Instrução de seleção
		{
		case 1:

			printf("Você escolheu: ");
			puts(produtos[0]);
			printf("Quantos você deseja comprar? ");
			scanf_s("%i", &qtd[0]);
			total[0] = qtd[0] * 5.00;


			break;

		case 2:

			printf("Você escolheu: ");
			puts(produtos[1]);
			printf("Quantos você deseja comprar? ");
			scanf_s("%i", &qtd[1]);
			total[1] = qtd[1] * 9.99;

			break;

		case 3:

			printf("Você escolheu: ");
			puts(produtos[2]);
			printf("Quantos você deseja comprar? ");
			scanf_s("%i", &qtd[2]);
			total[2] = qtd[2] *6.89; 

			break;

		case 4:

			printf("Você escolheu: ");
			puts(produtos[3]);
			printf("Quantos você deseja comprar? ");
			scanf_s("%i", &qtd[3]);
			total[3] = qtd[3] * 4.80;

			break;

		case 5:

			printf("Você escolheu: ");
			puts(produtos[4]);
			printf("Quantos você deseja comprar? ");
			scanf_s("%i", &qtd[4]);
			total[4] = qtd[4] * 3.49;

			break;

		case 6:

			printf("Você escolheu: ");
			puts(produtos[5]);
			printf("Quantos você deseja comprar? ");
			scanf_s("%i", &qtd[5]);
			total[5] = qtd[5] * 5.00;

			break;

		case 7:

			printf("Você escolheu: ");
			puts(produtos[6]);
			printf("Quantos você deseja comprar? ");
			scanf_s("%i", &qtd[6]);
			total[6] = qtd[6] * 4.99;

			break;
		}

		printf("Escolha o produto: ");
		scanf_s("%i", &op);

	}
	system("cls"); // limpa a tela
		
	printf("--------------- PEDIDOS -------------\n\n");

		for (int i = 0; i < TOTAL_DE_PRODUTOS; i++) // loop infinito
		{
			if (qtd[i] > 0)
			{
				puts(produtos[i]);
				printf("Quantidade: %i | Total a pagar: %.2f\n\n", qtd[i], total[i]);
				final += total[i];

			}
		}

		printf("Total do pedido: %.2f\n", final);

	system("pause");

	return 0;
}

void menu() {


	printf("----------------------- LANCHONETE --------------------\n\n");
	printf("Item      Produto           Código      Preço Unitário\n");
	printf(" 1     Cachorro-quente       100            R$ 5,00\n");
	printf(" 2       X-salada            101            R$ 8,79\n");
	printf(" 3       X-bacon             102            R$ 9,99\n");
	printf(" 4        Misto              103            R$ 6,89\n");                     //Menu
	printf(" 5        Salada             104            R$ 4,80\n");
	printf(" 6         Água              105            R$ 3,49\n");
	printf(" 7      Refrigerante         106            R$ 4,99\n");

}
