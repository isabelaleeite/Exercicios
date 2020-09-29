#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

#include <string.h>

int main()

{

	setlocale(LC_ALL, ""); // Acentuação em português

	// declaração de variáveis

	int opcao, indice = 0;

	float qtd, total = 0;

	float pedido[99][4];

	char produto[20];

	//float pedido[][4] = { 0.00,0.00,0.00,0.00 }; declarar a matriz desta forma gerou um erro em tempo de execução ...

	// Menu de Opções

	system("cls");

	printf("ITEM     PRODUTO             CÓDIGO        VALOR UNITÁRIO\n");

	printf("1        CACHORRO-QUENTE     100                 5,00\n");

	printf("2        X-SALADA            101                 8,79\n");

	printf("3        X-BACON             102                 9,99\n");

	printf("4        MISTO               103                 6,89\n");

	printf("5        SALADA              104                 4,80\n");

	printf("6        ÁGUA                105                 3,49\n");

	printf("7        REFRIGERANTE        106                 4,99\n");

	do // Escolha dos pedidos

	{

		printf("\nEscolha um item : ");

		scanf_s("%d", &opcao);

		if (opcao >= 1 && opcao <= 7)

		{

			printf("Quantidade : "); // Quantidade desejada do item

			scanf_s("%f", &qtd);

			if (qtd <= 0)

			{

				printf("Quantidade deve ser maior que ZERO !!!!!\n\n");

				system("pause");

				break;

			}

		}

		switch (opcao) // Montagem da lista de pedidos

		{

		case 1:

			pedido[indice][0] = opcao;

			pedido[indice][2] = qtd;

			pedido[indice][3] = 5.00;

			//pedido[indice][1] = strcpy_s(produto, "cahorroquente");

			//printf("\n%s\n", produto);

			indice++;

			break;

		case 2:

			pedido[indice][0] = opcao;

			pedido[indice][2] = qtd;

			pedido[indice][3] = 8.79;

			indice++;

			break;

		case 3:

			pedido[indice][0] = opcao;

			pedido[indice][2] = qtd;

			pedido[indice][3] = 9.99;

			indice++;

			break;

		case 4:

			pedido[indice][0] = opcao;

			pedido[indice][2] = qtd;

			pedido[indice][3] = 6.89;

			indice++;

			break;

		case 5:

			pedido[indice][0] = opcao;

			pedido[indice][2] = qtd;

			pedido[indice][3] = 4.80;

			indice++;

			break;

		case 6:

			pedido[indice][0] = opcao;

			pedido[indice][2] = qtd;

			pedido[indice][3] = 3.49;

			indice++;

			break;

		case 7:

			pedido[indice][0] = opcao;

			pedido[indice][2] = qtd;

			pedido[indice][3] = 4.99;

			indice++;

			break;

		}

	} while (opcao >= 1 && opcao <= 7);

	system("cls"); // Impressão do relatório de pedidos

	printf("Relatório dos Pedidos\n");

	printf("\nITEM   QTDE       PREÇO    VALOR\n");

	for (int i = 0; i < indice; i++)

	{

		printf("%.1f     %.1f       %.2f     %.2f\n", pedido[i][0], pedido[i][2], pedido[i][3], (pedido[i][2] * pedido[i][3]));

		total = total + (pedido[i][2] * pedido[i][3]);

	}

	printf("\n\nValor Total do Pedido     %.2f\n\n", total); // Impressão do valor total dos pedidos

	system("pause");

	return 0;

}



