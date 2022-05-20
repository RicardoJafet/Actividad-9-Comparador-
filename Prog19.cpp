/* Autor: Ricardo Jafet Granados Chable, Realizado: 17/02/2022
Programa de practica en clase en C#: Numero mayor 
*/
#include<stdio.h>

int main() {
	int a,b,c;
	printf("Introduce el valor de a: ");
	scanf("%d", &a);
	printf("Introduce el valor de b: ");
	scanf("%d", &b);
	printf("Introduce el valor de c: ");
	scanf("%d", &c);
	
	if(a>b&&a>c){
		printf("\na es el mayor");
	}else if(b>a && b>c){
		printf("\nb es el mayor");
	}else if(c>a && c>b){
		printf("\nc es el mayor");
	}else if(c==a && b==c) {
	printf("\nLos tres son iguales");	
	}else if(a==b && a>c){
		printf("\na y b son mayores");
	}else if(a==c && a>b){
		printf("\na y c son mayores");
	}else {
		printf("\nc y b son mayores");
	}
	return 0;
}
