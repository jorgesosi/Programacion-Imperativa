#include <stdio.h>

int main()
{
int a=0; //Declaración de variable entera de tipo entero
int *puntero; //Declaración de variable puntero de tipo entero
puntero = &a; //Asignación de la dirección memoria de a

printf("El valor de a es: %i. \nEl valor de *puntero es: %i. \n",a,*puntero);
printf("La direccion de memoria de *puntero es: %p  y la de &a es : %p",puntero , &a);

return 0;
}
