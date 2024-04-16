#include <stdlib.h>
#include <stdlib.h>

int main()
{

int age=10;
int *pointer;

pointer = &age;

printf("la valeur du variable age: %d \n", age);
printf("la valeur de l'adresse age: %p", &age);
printf("\n----------------------------\n");
printf("la valeur du variable age: %d \n", *pointer);
printf("la valeur de l'adresse age: %p", pointer);
}
