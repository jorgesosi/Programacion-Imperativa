#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Contactos {
   char  nombre[50];
   char  apellido[50];
   char  direccion[50];
   char	ciudad[50];
   char telefono[20];
};
struct Contactos Contacto;
void cargar();
void mostrar();
void buscar();
FILE *archivo;
int main(){
	//int posArch;
	int  opt;
	for(;;){
		printf("Ingrese una de las siguientes opciones:\n");
		printf("1- Ingrese un contacto\n");
		printf("2- Mostrar todos los contactos\n");
		printf("3- Buscar un contacto\n");
		printf("4 Salir\n");
		scanf("%d", &opt);
		fflush(stdin);
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
	return 0;
}
void mostrar(){
	int cont=1;
	
	archivo=fopen("/home/jorge/Documentos/sistemas 2016/Programacion-Imperativa/prueba.txt", "r");
	//for(i=0;i<2;i++){
	while(!feof(archivo)){//mientras no este en el final del archivo carga los datos existentes
		fgets(Contacto.nombre, 50, archivo);
		if (strlen(Contacto.nombre )== 1){//En el caso de que llegue al final del archivo sale del bucle y no imprime el ultimo registro 2 veces
			break;// se podria probar si con do while no es mas eficiente.
		}
		printf("Contacto Numero: %d\n", cont);//desde aca se cargan los datos guardados en archivo y se muestran en pantalla
		printf( "Nombre  : %s", Contacto.nombre);//este bucle carga los datos gusdados en orden en el archivo y se los asigna 
		fgets(Contacto.apellido,50,archivo);//a la estructura Contacto
		printf( "Apellido : %s", Contacto.apellido);
		fgets(Contacto.direccion,50,archivo);
		printf( "Direccion : %s",Contacto.direccion);
		fgets(Contacto.ciudad ,50,archivo);
		printf( "Ciudad : %s",Contacto.ciudad);
		fgets(Contacto.telefono ,20,archivo);
		printf( "Identificador : %s", Contacto.telefono);
		getchar();
		cont++;// este contador esel que se incremetna y se muestra antes de cada nombre. 
		system("clear");
	}
	fclose(archivo);
	//return 0;
}
void cargar(){
		archivo=fopen("/home/jorge/Documentos/sistemas 2016/Programacion-Imperativa/prueba.txt", "a+");
	
		printf("Ingrese el Nombre: \n");
		fgets(Contacto.nombre, 50, stdin);// se usa para cargar string con espacios asigna nombre de la variable, longitoud  y forma de ingreso
		printf("Ingrese el Apellido: \n");
		fgets(Contacto.apellido, 50, stdin);// fgets asigna lo ingresado por pantalla a la variable correspondietne de la estructura
		printf("Ingrese direccion: \n");
		fgets(Contacto.direccion, 50, stdin);
		printf("Ingrese ciudad: \n");
		fgets(Contacto.ciudad, 50, stdin);
		printf("Ingrese telefono: \n");
		fgets(Contacto.telefono, 20, stdin);
		//fflush(stdout);
		/*while(scanf("%d",&Contacto.telefono)!=1){ //escanea o recibe un valor, si no es entero lo hace hasta que se ingrese un numero interger
			printf("vuelva a intentarlo con un numero:  ");
			while(getchar() != '\n');// sentencia que permite salir de un bucle infiniro del bucle anterior espera hasta que hay un cambio de linea
		}*/
		//getchar();// toma el enter despues del interger, sino es tomado por el primer fgets() o scanf() siguente como valor vacio
		system("clear");// limpia la pantalla para cargar el nuevo libro
		fprintf(archivo,"%s", Contacto.nombre);//imprime los valores cargados en la estructura en el archivo
		fprintf(archivo,"%s", Contacto.apellido);//los datos fueron cargados en la estructura pero la estructura en si no es 
		fprintf(archivo,"%s", Contacto.direccion);//almacenada en el archivo, para poder realizar esto se debe utilizar fwrite 
		fprintf(archivo,"%s", Contacto.ciudad);
		fprintf(archivo,"%s\n", Contacto.telefono);
	fclose(archivo);
	
}
void buscar(){
	archivo=fopen("/home/jorge/Documentos/sistemas 2016/Programacion-Imperativa/prueba.txt", "r");
	int opt1;
	char nom[50];
	printf("ingrese una opcion de busqueda\n");
			printf("1- Buscar por nombre\n");
			printf("2- Buscar por apellido\n");
			printf("3- cancelar\n");
			scanf("%d",&opt1);
			fflush(stdin);
			getchar();
			switch (opt1){
				case 1:
					printf("ingrese el nombre a buscar:  \n");
					fgets(nom,50,stdin);
					while(!feof(archivo)){
						fgets(Contacto.nombre, 50, archivo);
						fgets(Contacto.apellido,50,archivo);
						fgets(Contacto.direccion,50,archivo);
						fgets(Contacto.ciudad ,50,archivo);
						fgets(Contacto.telefono ,20,archivo);
						if (strcmp(nom, Contacto.nombre)== 0){// compara dos string si nom el string nom esta dentro de contacto.nombre lo muestra 
							printf( "Nombre  : %s", Contacto.nombre);// si se coloca el vallor a comparar == 0 busca la coincidencia exacta
							printf( "Apellido : %s", Contacto.apellido);
							printf( "Direccion : %s",Contacto.direccion);
							printf( "Ciudad : %s",Contacto.ciudad);
							printf( "Identificador : %s\n\n", Contacto.telefono);
						}
					}
				break;
				case 2:
					printf("ingrese el apellido a buscar:  \n");
					fgets(nom,50,stdin);
					while(!feof(archivo)){
						fgets(Contacto.nombre, 50, archivo);
						fgets(Contacto.apellido,50,archivo);
						fgets(Contacto.direccion,50,archivo);
						fgets(Contacto.ciudad ,50,archivo);
						fgets(Contacto.telefono ,20,archivo);
						if (strcmp(nom, Contacto.apellido)== 0){// compara dos string si el string nom esta dentro de contacto.nombre lo muestra 
							printf( "Nombre  : %s", Contacto.nombre);// si se coloca el vallor a comparar == 0 busca la coincidencia exacta
							printf( "Apellido : %s", Contacto.apellido);
							printf( "Direccion : %s",Contacto.direccion);
							printf( "Ciudad : %s",Contacto.ciudad);
							printf( "Identificador : %s\n\n", Contacto.telefono);
						}
					}
				break;
				case 3:
				break;
				default:
				break;				
			}
	fclose(archivo);
}

