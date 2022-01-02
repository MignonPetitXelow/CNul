#include <stdio.h>
#include <stdlib.h>

void action(void);

typedef struct
{
	int hp, mana, niveau;
	signed char addition;
} Test;

int main(void)
{
	Test test;
	test.hp = 100;
	test.mana = 50;
	test.addition = 5;
	test.niveau = 14;
	int result = test.addition * test.niveau;


	printf("%d Niveau.\n", test.niveau);
	printf("%d Hp.\n", test.hp + result);
	printf("%d Mana.\n", test.mana + result);
	if (test.niveau >= 15)
	{printf("Rang du joueur : Dieux.\n");}
	else{printf("Rang du joueur : Villageois.\n");}
	action();

	return 0;
}

void action(void)
{
	printf("\nBienvenue!.. \n");
	printf("\n=== Histoire ===\n");
	printf("Un Goblin vous attaque en foret.\n");
	printf("Vite! vous devez reagir.\n");

	printf("\n=== Actions ===\n");
	printf("1 - Fuir.\n");
	printf("2 - Regarder votre sac.\n");
	printf("3 - L'attaque en retour.\n");
	printf("4 - Se proteger.\n");
	printf("\nQuel action allez vous faire ?\n");

	int choix;
	int ret_scanf_choice = scanf_s("%d", &choix);
	if (ret_scanf_choice == 0) {
		fprintf(stderr, "Erreur. (Utilisez des chiffres.)\n");
		exit(EXIT_FAILURE);
	}

	switch (choix)
	{
		case 1:
			printf("\nVous fuyez. par chance la goblin ne vous a pas suivi..\n");
			printf("Pfiouu.. vous l'avez echappez belle.\n");
			break;
		case 2:
			printf("\n=== Sac ===\n");
			printf("1 - Telephone portable. (Attendez quoi ?)\n");
			printf("2 - 3 Pommes.\n");
			printf("3 - Master sword. (Zut je me suis tromper de jeu..)\n");
			printf("4 - Carte.\n");
			printf("\nRien d'utile...\n");
			printf("\n=={ Vous etes mort }==\n(Je sais pas pourquoi mais j'ai pas envie de chercher une raison donc on va dire que c'est la faute du goblin. <3)\n");
			break;
		case 3:
			printf("\nVous l'attaquez..\n");
			printf("Mais vous avez oubliez que se jeu est une blague.\n");
			printf("-314 force.\n");
			printf("Vous le touchez mais vous ne lui avais fait aucun degat..\n");
			printf("\n=={ Vous etes mort }==\n(Clap clap clap.)\n");
			break;
		case 4:
			printf("\nVous vous protegez avec... de l'air ?...\n");
			printf("\n=={ Vous etes mort }==\n(La prochaine fois pensez a prendre un bouclier ?..)\n");
			break;

	}

	return;
}