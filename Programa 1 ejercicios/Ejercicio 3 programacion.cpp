#include <stdio.h>
#include <math.h>
char nombre[15];
int edad;
float peso, IMC;
float estatura;

int main()
{
	printf("Ingrese su nombre por favor\n");
	scanf("%s", &nombre);
	printf("Ingrese su edad por favor\n");
	scanf("%d", &edad);
	printf("Ingrese su peso por favor\n");
	scanf("%f", &peso);
	printf("Ingrese su estatura por favor\n");
	scanf("%f", &estatura);
	IMC= peso/(pow(estatura, 2));
	printf("Hola %s con edad de %d y peso de %f su IMC es %f", nombre, edad, peso, IMC);
	
	
	return 0;
}

