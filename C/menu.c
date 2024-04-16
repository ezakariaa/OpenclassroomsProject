#include <stdio.h>

int main(void)
{
	int menu;

	printf("=== Menu ===\n");
	printf("1. Royal Cheese\n");
	printf("2. Mc Deluxe\n");
	printf("3. Mc Bacon\n");
	printf("4. Big Mac\n");
	printf("Votre choix ?");

	scanf("%d", &menu);

	switch(menu)
	{
		case 1:
			printf("Tu as choisi le menu Royal Cheese");
			break;
		case 2:
			printf("Tu as choisi le Mc Deluxe");
			break;
		case 3:
			printf("Tu as choisi le Mc Bacon");
			break;
		case 4:
			printf("Tu as choisi le Big Mac");
			break;
        default:
        printf("Je n'ai aucune reponse");
        break;
    }
}
