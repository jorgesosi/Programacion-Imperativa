#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>// para usar funciones que trabajen sobre caracteres
void intro(void);
void modif(void);
void listar(void);
void consul(void);
void error(void);
struct{
	char apellido[30];
	char nombre[30];
	char direccion[30];
	char telefono [30];
	char ciudad [30];
	}datos;

FILE *fichero;
char opc,nom[30];
int tama;

int main(void){
	for(;;){ /*crea un bucle infinito de aperturas*/
		system("clear");
		printf("MENU\n");
		printf("1- Introducir registros\n");
		printf("2- Modificar registros\n");
		printf("3- listar registros\n");
		printf("4- Consultar registros\n");
		printf("5- FINALIZAR\n");
		printf("Introducir el nro de opcion deseado");
		opc=getchar();// ingresa la opcion de 1 a 5;
		fflush(stdin);
		getchar();
		
		switch(opc){
			case'1': intro();break;
			case'2': modif();break;
			case'3': listar();break;
			case'4': consul();break;
			case'5': exit(0);// sale del bucle infinito
			default:break;
		}
	}
}
void intro (void){  /*introduce datos en el archivo*/
	
	system("clear");
	if((fichero=fopen("/home/jorge/Documentos/sistemas 2016/Programacion-Imperativa/agenda.txt","a+"))==NULL)error();
	for(;;){
		printf("Para finalizar presione ENTER\n");
		printf("APELLIDO: ");
		fgets(datos.apellido,30, stdin);
		if(strlen(datos.apellido)==1){// se verifica que apellido tenga una longitud valida, 1 significa que solo tiene un caracter = a null o \n
			break;}
		printf("NOMBRE: ");// se cargan los datos en los campos de la estructura
		fgets(datos.nombre,30,stdin);
		printf("DIRECCION: ");
		fgets(datos.direccion,30,stdin);
		printf("TELEFONO: ");
		fgets(datos.telefono,30,stdin);
		printf("CIUDAD: ");
		fgets(datos.ciudad,30,stdin);
		printf("Datos correctos (s/n)?:");// se pide la confiermacion de los datos a ser cargados en el archivo
		opc=toupper(getchar());
		if(opc=='S')fwrite(&datos,sizeof(datos),1,fichero); // se escribe la estructura completa en el archivo
	}
	fclose(fichero);// se cierra el archivo
};
void modif(void){
	system("clear");
	tama=sizeof(datos);//verifica el tamaño de ka estructura y se la asigna a la variable
	if((fichero=fopen("/home/jorge/Documentos/sistemas 2016/Programacion-Imperativa/agenda.txt","r+"))==NULL) error();
		printf("Introduzca el Nombre a modificar: ");
		fgets(nom,30,stdin);// se carga el conjunto de datos a buscar en la estructura, pueden ser varios 
		getchar();
		system("clear");
		while(!feof(fichero)){
			fread(&datos,sizeof(datos),1,fichero);// lee dentro d ela estructura datos 1 solo conjunto de datos, 
			if(strcmp(datos.apellido,nom)==0){// no llega al final de archivo imprime por pantalla el conjunto de datos encontrado
				printf("1- APELLIDO: %s",datos.apellido);
				printf("2- NOMBRE: %s",datos.nombre);
				printf("3- DIRECCION: %s",datos.direccion);
				printf("4-TELEFONO: %s",datos.telefono);
				printf("5- CIUDAD: %s",datos.ciudad);
				printf("6- FIN MODIFICACIONES");

				while(opc!='6'){
					printf("campo a modificar: ");// se selecciona el campo a modificar
					opc=getchar();
					getchar();
					//clreol();
					switch(opc){// se toma por pantalla el nuevo dato
						case'1':printf("Nuevo nombre: ");fgets(datos.apellido,30,stdin);break;
						case'2':fgets(datos.nombre,30,stdin);break;
						case'3':fgets(datos.direccion,30,stdin);break;
						case'4':fgets(datos.telefono,30,stdin);break;
						case'5':fgets(datos.ciudad,30,stdin);break;
						case'6':fseek(fichero,-tama, SEEK_CUR);
						fwrite(&datos,sizeof(datos),1,fichero);break;// escribe los datos en el archivo
						default: break;
					}
				}

		      break;//sale del if menu principal
			}
	 }// cierra el while
	fclose(fichero);// sale de la funcion cerrando el archivo
};
void error(void){// imprime mensaje por pantall en caso de no poder abrir el archivo
system("clear");
	printf("Error. No puedo abrir el fichero");
	getchar();
	exit(0);
};
void consul(void){//se consultan los registros cargados en la estructura
system("clear");
	if((fichero=fopen("/home/jorge/Documentos/sistemas 2016/Programacion-Imperativa/agenda.txt","r+"))==NULL)error();
	 printf("Introduzca el nombre a consultar: ");
	fgets(nom,30,stdin);
system("clear");
	while(!feof(fichero)){
		fread(&datos,sizeof(datos),1,fichero);// lee un conjunto de datos de la estructura desde el archivo
		if(strcmp(datos.apellido, nom)==0){
			printf("APELLIDO: %s", datos.apellido);
			printf("NOMBRE: %s", datos.nombre);
			printf("DIRECCION: %s", datos.direccion);
			printf("TELEFONO: %s",datos.telefono);
			printf("CIUDAD: %s",datos.ciudad);
			getchar();
			break;
		}
	}
	fclose(fichero);
};
void listar(void){// realiza un listado completo de los datos en la estructura , un conjunto de registros por vez
system("clear");
	if((fichero=fopen("/home/jorge/Documentos/sistemas 2016/Programacion-Imperativa/agenda.txt","r"))==NULL)error();
	//clrscr();
	while(!feof(fichero)){
		fread(&datos,sizeof(datos),1,fichero);

	       if (strlen(datos.nombre)!=0 && !feof(fichero)){
			printf("APELLIDO: %s", datos.apellido);
			printf("NOMBRE: %s", datos.nombre);
			printf("DIRECCION: %s", datos.direccion);
			printf("TELEFONO: %s",datos.telefono);
			printf("CIUDAD: %s",datos.ciudad);
			getchar();
			system("clear");
			}

	}
	fclose(fichero);
};

