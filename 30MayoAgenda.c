#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * menu opciones cargar, mostrar buscar
 * ingresar minimo 5 datos en la estructura contactos
 * mostrar todos los contactos
 * buscar un contacto por nombre
 * titulos e identificador
 * se utiliza un bucle for solo para cargar una cantidad limitada de libros
 * @param char nombre[50] se ingresa el string para titulo maximo 50 caracteres
 * @param char apellido[50] se ingresa el nombre y apellido del autor/es 
 * @param char direccion[50] se ingresa un tema de libro, igual que los anteriores con um maximod e 50 caracteres
 * @param int id_libro recibe un valor numerico entero
 * por ahora no tiene ninguna validacion solo que el id _libro sea un numero y no cadena de caracteres
 * 
 * */

struct Contactos {
   char  nombre[50];
   char  apellido[50];
   char  direccion[50];
   char	ciudad[50];
   int  telefono;
};
struct Contactos Contacto[5];
void cargar();
void mostrar();
void buscar();
int main(){
	//struct Contactos Contacto[5];
	int  opt;
	
	/*for(i=0;i<5;i++){
		printf( "Nombre  : %s", Contacto[i].nombre);
		printf( "Apellido : %s", Contacto[i].apellido);
		printf( "Direccion : %s",Contacto[i].direccion);
		printf( "Direccion : %s",Contacto[i].ciudad);
		printf( "Identificadorr : %d\n\n", Contacto[i].telefono);
	}*/
	for(;;){
		printf("Ingrese una de las siguientes opciones:\n");
		printf("1- Ingrese un contacto\n");
		printf("2- Mostrar todos los contactos\n");
		printf("3- Buscar un contacto\n");
		printf("4 Salir\n");
		scanf("%d", &opt);
		getchar();
		switch(opt){
			case 1:
			system("clear");
			cargar();
			break;
			case 2:
			system("clear");
			mostrar();
			break;
			case 3:
			system("clear");
			buscar();
			break;
			case 4:
			exit(1);
			default:break;
			
		}
	}
	system("clear");	
}
void mostrar(){
	int i;
	for(i=0;i<2;i++){
		printf( "Nombre  : %s", Contacto[i].nombre);
		printf( "Apellido : %s", Contacto[i].apellido);
		printf( "Direccion : %s",Contacto[i].direccion);
		printf( "Ciudad : %s",Contacto[i].ciudad);
		printf( "Identificador : %d\n\n", Contacto[i].telefono);
	}
	//return 0;
}
void cargar(){
	int i;
	for(i=0;i<2;i++){
		printf("Ingrese el Nombre: \n");
		fgets(Contacto[i].nombre, 50, stdin);// se usa para cargar string con espacios asigna nombre de la variable, longitaud  y forma de ingreso
		printf("Ingrese el Apellido: \n");
		fgets(Contacto[i].apellido, 50, stdin);
		printf("Ingrese direccion: \n");
		fgets(Contacto[i].direccion, 50, stdin);
		printf("Ingrese ciudad: \n");
		fgets(Contacto[i].ciudad, 50, stdin);
		printf("Ingrese telefono: \n");
		fflush(stdout);
		while(scanf("%d",&Contacto[i].telefono)!=1){ //escanea o recibe un valor, si no es entero lo hace hasta que se ingrese un numero interger
			printf("vuelva a intentarlo con un numero:  ");
			while(getchar() != '\n');// sentencia que permite salir de un bucle infiniro del bucle anterior espera hasta que hay un cambio de linea
		}
		getchar();// toma el enter despues del interger, sino es tomado por el primer fgets() o scanf() siguente como valor vacio
		system("clear");// limpia la pantalla para cargar el nuevo libro
	}
	
}
void buscar(){
	int i;
	char nom[50];
	printf("ingrese el nombre a buscar:  \n");
	fgets(nom,50,stdin);
	for(i=0;i<2;i++){
			if (strcmp(nom, Contacto[i].nombre)<= 0){// compara dos string si nom el string nom esta dentro de contacto.nombre lo muestra 
				printf( "Nombre  : %s", Contacto[i].nombre);// si se coloca el vallor a comparar == 0 busca la coincidencia exacta
				printf( "Apellido : %s", Contacto[i].apellido);
				printf( "Direccion : %s",Contacto[i].direccion);
				printf( "Ciudad : %s",Contacto[i].ciudad);
				printf( "Identificador : %d\n\n", Contacto[i].telefono);
			}
			
	}
}
