# include <stdio.h>
int *cambiarvalor(int *a);
int main (){
	int a,b;
	int *p;
	a=1;
	b=0;
	p=&a;
	printf ("%d, %d, %d,\n",a,*p, b);
	cambiarvalor(p); 
	b= *p +10;
	p=&b;
	//*p=*p +1;
	printf ("%d, %d, %d , %p",a,*p, b, p);
	return 0;
}

int *cambiarvalor(int *a){
	*a = *a +10;
	return a;
}
