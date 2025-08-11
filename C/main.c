#define _CRT_SECURE_NO_WARNINGS
#include "header.h"

void main()
{
	printf("Progetto d'Esame di Laboratorio\nStudente: Tartaglia Luca\n\n");
	printf("\n---SCELTA---\nQuale progetto vuoi eseguire?\n");
	printf(" [1] Progetto Cellule (Scacchiera)\n [2] Progetto Chiamate Telefoniche\nDigita la tua scelta: ");

	int scelta = 0;
	scanf("%d", &scelta);

	printf("\n\n------------------------------------\n");

	if (scelta == 1)
	{
		main_cellule();
	}
	else if (scelta == 2)
	{
		main_chiamate_telefoniche();
	}
	else
	{
		printf("\nPer proseguire, inserisci un valore adeguato!\n");
	}
}