 /* Crear un programa llamado paresImpares que cree un array de 100 números aleatorios del 1 al 1000. 
 Una vez creado, mostrar el contenido y después organizarlo de forma que estén juntos los elementos pares y los impares. 
 Después, volver a mostrar el array
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 

#define TAM 100

 

void escribirArray(int a[], int tamanio);

 

int main(){

    int a[TAM];
    int par[TAM]={0};
    int impar[TAM]={0};
    int i,j;

     

    srand(time(NULL));

    /*Relleno inicial del array a*/

    for(i=0;i<TAM;i++){

        a[i]=(rand()%100)+1;

    }

    /* Escritura del contenido del primer array*/

    printf("Primer array:\n");
    escribirArray(a,TAM);

    /* Grabación de los pares y los impares en los otros arrays*/

    for(i=0;i<TAM;i++){

        if(a[i]%2==0)

            par[i]=a[i];

        else

            impar[i]=a[i];

    }

    /* Escritura del array par e impar*/

    printf("\nPar:\n");
    escribirArray(par,TAM);
    printf("\nImpar:\n");
    escribirArray(impar,TAM);

    /* Mezcla de ambos arrays en el array a
    y escritura del resultado final*/


    j=0;/*j es el índice del array a.
    Sólo se mueve cuando se insertan en él números*/

    /*recorrido del array par e impar e inserción de los números
    pares que contenga (todos los que sean distintos de 0)
    se añade al array a desde la primera posición del mismo*/

    for(i=0;i<TAM;i++){

        if(par[i]!=0) {

            a[j]=par[i];
            j++;

        }

    }

    /*recorrido del array impar e inserción de los números
    impares que contenga desde la posición en la que quedó j*/

    for(i=0;i<TAM;i++){

        if(impar[i]!=0) {

            a[j]=impar[i];
            j++;

        }

    }

    /*Resultado final*/

    printf("\nResultado final:\n");
    escribirArray(a,TAM);

} /* fin main */

 

/* Escribe el contenido de un array de enteros por pantalla */

void escribirArray(int a[], int tamanio){

    int i;
    for(i=0;i<tamanio;i++){

        printf("%d ",a[i]);

    }

    printf("\n");

}
