#include <stdio.h>

int main () {
	//Realiza un programa que permita la suma de dos numeros 
	
	
	// definir variables 
	int numero1;
	int numero2;
	int suma;
	
	
	//entrada
	printf ( "INGRESE PRIMER NUMERO");
	scanf("%d" , &numero1);
	printf ( "INGRESE SEGUNDO NUMERO");
	scanf("%d" , &numero2);
	
	
		//proceso 
	suma =numero1+numero2;
	
	//salida 
    printf ("El resultado de la suma es: %d\n" ,  suma) ;
	
		
return 0;	
}