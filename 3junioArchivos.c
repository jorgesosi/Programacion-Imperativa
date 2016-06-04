#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Contactos {
   char  nombre[50];
   char  apellido[50];
   char  direccion[50];
   char	ciudad[50];
   int  telefono;
};
struct Contactos Contacto;
void cargar();
int main(){
	int posArch;
	int  opt;
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
	//		mostrar();
			break;
			case 3:
			system("clear");
	//		buscar();
			break;
			case 4:
			exit(1);
			default:break;
			
		}
	}
	system("clear");	

/*	FILE *archivo;
		archivo=fopen("/home/jorge/Documentos/sistemas 2016/Programacion-Imperativa/prueba.txt", "w");
		printf("Ingrese el Nombre: \n");
		fgets(Contacto.nombre, 50, stdin);// se usa para cargar string con espacios asigna nombre de la variable, longitaud  y forma de ingreso
		printf("Ingrese el Apellido: \n");
		fgets(Contacto.apellido, 50, stdin);
		printf("Ingrese direccion: \n");
		fgets(Contacto.direccion, 50, stdin);
		printf("Ingrese ciudad: \n");
		fgets(Contacto.ciudad, 50, stdin);
		printf("Ingrese telefono: \n");
		fflush(stdout);
		while(scanf("%d",&Contacto.telefono)!=1){ //escanea o recibe un valor, si no es entero lo hace hasta que se ingrese un numero interger
			printf("vuelva a intentarlo con un numero:  ");
			while(getchar() != '\n');// sentencia que permite salir de un bucle infiniro del bucle anterior espera hasta que hay un cambio de linea
		}
		getchar();// toma el enter despues del interger, sino es tomado por el primer fgets() o scanf() siguente como valor vacio
		system("clear");// limpia la pantalla para cargar el nuevo libro
		
		fprintf(archivo,"%s", Contacto.nombre);
		fprintf(archivo,"%s", Contacto.apellido);
		fprintf(archivo,"%s", Contacto.direccion);
		fprintf(archivo,"%s", Contacto.ciudad);
		fprintf(archivo,"%d", Contacto.telefono);
		posArch=fgetc(archivo);
		//printf("%d",posArch);*/
	
	//archivo1=fopen("/home/jorge/Documentos/sistemas 2016/Programacion-Imperativa/prueba1.txt", "a");
	//fprintf(archivo1, "prueba...\n");
	
	return 0;
}
/*void mostrar(){
	int i;
	for(i=0;i<2;i++){
		printf( "Nombre  : %s", Contacto.nombre);
		printf( "Apellido : %s", Contacto.apellido);
		printf( "Direccion : %s",Contacto.direccion);
		printf( "Ciudad : %s",Contacto.ciudad);
		printf( "Identificador : %d\n\n", Contacto.telefono);
	}
	//return 0;
}*/
void cargar(){
		FILE *archivo;
		archivo=fopen("/home/jorge/Documentos/sistemas 2016/Programacion-Imperativa/prueba.txt", "a+");
	
		printf("Ingrese el Nombre: \n");
		fgets(Contacto.nombre, 50, stdin);// se usa para cargar string con espacios asigna nombre de la variable, longitaud  y forma de ingreso
		printf("Ingrese el Apellido: \n");
		fgets(Contacto.apellido, 50, stdin);
		printf("Ingrese direccion: \n");
		fgets(Contacto.direccion, 50, stdin);
		printf("Ingrese ciudad: \n");
		fgets(Contacto.ciudad, 50, stdin);
		printf("Ingrese telefono: \n");
		fflush(stdout);
		while(scanf("%d",&Contacto.telefono)!=1){ //escanea o recibe un valor, si no es entero lo hace hasta que se ingrese un numero interger
			printf("vuelva a intentarlo con un numero:  ");
			while(getchar() != '\n');// sentencia que permite salir de un bucle infiniro del bucle anterior espera hasta que hay un cambio de linea
		}
		getchar();// toma el enter despues del interger, sino es tomado por el primer fgets() o scanf() siguente como valor vacio
		system("clear");// limpia la pantalla para cargar el nuevo libro
		fprintf(archivo,"%s", Contacto.nombre);
		fprintf(archivo,"%s", Contacto.apellido);
		fprintf(archivo,"%s", Contacto.direccion);
		fprintf(archivo,"%s", Contacto.ciudad);
		fprintf(archivo,"%d\n", Contacto.telefono);
	
	
}
/*void buscar(){
	int i;
	char nom[50];
	printf("ingrese el nombre a buscar:  \n");
	fgets(nom,50,stdin);
	for(i=0;i<2;i++){
			if (strcmp(nom, Contacto.nombre)<= 0){// compara dos string si nom el string nom esta dentro de contacto.nombre lo muestra 
				printf( "Nombre  : %s", Contacto.nombre);// si se coloca el vallor a comparar == 0 busca la coincidencia exacta
				printf( "Apellido : %s", Contacto.apellido);
				printf( "Direccion : %s",Contacto.direccion);
				printf( "Ciudad : %s",Contacto.ciudad);
				printf( "Identificador : %d\n\n", Contacto.telefono);
			}
			
	}
}
*/
