#include <stdio.h>

int main()
{

int array[10]={0,2,3,5,5,6,7,8,9,0}; //Declarar e inicializar un array. Ejemplo 1
int *puntero = &array[0]; //Le damos la dirección de inicio del array
int i; //variable contadora...
char nombre[]="Gustavo A. Chavarria"; //declaramos un array de caracteres
for (i=0;i<10;i++)
printf("%d\n",*(puntero+i)); //imprimimos los valores del puntero.


char *punter=nombre;//Asignamos al puntero el comienzo del array Ejemplo 2
printf("%s \nIngrese otro nombre: ",punter);//Escribimos en pantalla nombre...
gets(punter); //leemos otro nombre
printf("%s",punter); //escribimos el nuevo nombre.

return 0;
}
