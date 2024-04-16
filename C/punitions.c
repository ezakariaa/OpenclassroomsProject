#include <stdlib.h>
#include <stdio.h>

void punition(int nombreDeLignes)
{
    int i;

    for (i = 0 ; i < nombreDeLignes ; i++)
    {
        printf("Je ne dois pas copier sur mon voisin\n");
    }
}

int main(int argc, char *argv[])
{
    punition(10);

    return 0;
}
