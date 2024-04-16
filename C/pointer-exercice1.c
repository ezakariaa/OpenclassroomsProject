#include <stdlib.h>
#include <stdlib.h>

void triplePointeur(int *pointeurSurNombre);

int main()
{
    int nombre;

    printf("Saisissez un numero: ");
    scanf("%d",&nombre);

    triplePointeur(&nombre); //On envoie l'adresse de nombre à la fonction
    printf("%d", nombre); //On affiche la variable nombre. La fonction a directement modifié la valeur de la variable car elle connaissait son adresse

    return 0;
}

void triplePointeur(int *pointeurSurNombre)
{
    *pointeurSurNombre *= 3; // On multiplie par 3 la valeur de nombre
}
