#include <stdio.h>
#include <stdlib.h>
//#include <process.h>
#include <string.h>
#include <ctype.h>
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
		opc=getchar();
		getchar();
		switch(opc){
			case'1': intro();break;
			case'2': modif();break;
			case'3': listar();break;
			case'4': consul();break;
			case'5': exit(0);
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
		if(strlen(datos.apellido)==1){
		//printf("%d",d=strlen(datos.apellido));
		//getchar();
		 break;}
		printf("NOMBRE: ");
		fgets(datos.nombre,30,stdin);
		printf("DIRECCION: ");
		fgets(datos.direccion,30,stdin);
		printf("TELEFONO: ");
		fgets(datos.telefono,30,stdin);
		printf("CIUDAD: ");
		fgets(datos.ciudad,30,stdin);
		printf("Datos correctos (s/n)?:");
		opc=toupper(getchar());
		if(opc=='S')fwrite(&datos,sizeof(datos),1,fichero);
	}
	fclose(fichero);
};
void modif(void){
system("clear");
tama=sizeof(datos);
if((fichero=fopen("/home/jorge/Documentos/sistemas 2016/Programacion-Imperativa/agenda.txt","r+"))==NULL) error();
printf("Introduzca el Nombre a modificar: ");
fgets(nom,30,stdin);
system("clear");
	while(!feof(fichero)){
		fread(&datos,sizeof(datos),1,fichero);
		if(strcmp(datos.apellido,nom)==0){
			printf("1- APELLIDO: %s",datos.apellido);
			printf("2- NOMBRE: %s",datos.nombre);
			printf("3- DIRECCION: %s",datos.direccion);
			printf("4-TELEFONO: %s",datos.telefono);
			printf("5- CIUDAD: %s",datos.ciudad);
			printf("6- FIN MODIFICACIONES");

			while(opc!='6'){
			printf("campo a modificar: ");
				opc=getchar();
				//clreol();
					switch(opc){
						case'1':fgets(datos.apellido,30,stdin);break;
						case'2':fgets(datos.nombre,30,stdin);break;
						case'3':fgets(datos.direccion,30,stdin);break;
						case'4':fgets(datos.telefono,30,stdin);break;
						case'5':fgets(datos.ciudad,30,stdin);break;
						case'6':fseek(fichero,-tama, SEEK_CUR);
						fwrite(&datos,sizeof(datos),1,fichero);break;
						default: break;
					}
			}

		      break;
		      }
	 }
	fclose(fichero);
};
void error(void){
system("clear");
	printf("Error. No puedo abrir el fichero");
	getchar();
	exit(0);
};
void consul(void){
system("clear");
	if((fichero=fopen("/home/jorge/Documentos/sistemas 2016/Programacion-Imperativa/agenda.txt","r+"))==NULL)error();
	 printf("Introduzca el nombre a consultar: ");
	fgets(nom,30,stdin);
system("clear");
	while(!feof(fichero)){
		fread(&datos,sizeof(datos),1,fichero);
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
void listar(void){
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

