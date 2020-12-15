#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define pi 3.1416
#define grav 9.8

void menu (void);
void VolEsfera (void);
void Gravedad (void);
void IMC (void);

int main (void)
{
	menu ();
	return 0;
}

void menu ()
{
	int op;
	do{
		system ("cls");
		printf ("M E N U  P R I N C I P A L\n");
		printf ("1.- Volumen de una esfera\n");
		printf ("2.- Fuerza de atraccion\n");
		printf ("3.- IMC\n");
		printf ("4.- Salir\n");
		scanf ("%d", &op);
		switch (op)
		{
			case 1:
				VolEsfera ();
				break;
			case 2:
				Gravedad ();
				break;
			case 3:
				IMC ();
				break;
			case 4:
				printf ("Hasta luego\n");
				getch ();
		}
	}while (op!=4);
}

void VolEsfera (void)
{
	float r, vol;
	printf ("Ingresa el valor del radio\n");
	scanf ("%f", &r);
	vol=((pi*1.333333)*(r*r*r));
	printf ("El volumen de la esfera es: %f\n", vol);
	getch ();
}

void Gravedad (void)
{
	float d, m1, m2, fg;
	printf ("Ingrese la masa del objeto 1 (en kg)\n");
	scanf ("%f", &m1);
	printf ("Ingrese la masa del objeto 2 (en kg)\n");
	scanf ("%f", &m2);
	printf ("Ingrese la distancia entre los objetos (en m)\n");
	scanf ("%f", &d);
	fg=(grav*m1*m2)/(d*d);
	printf ("La fuerza de atraccion del objeto es: %f\n", fg);
	getch ();
}

void IMC (void)
{
	char nombre [50];
	float peso, altura, imc;
	int edad;
	printf ("Ingresa tu nombre\n");
	fflush (stdin);
	gets (nombre);
	printf ("Ingresa tu edad\n");
	scanf ("%d", &edad);
	printf ("Ingresa tu peso\n");
	scanf ("%f", &peso);
	printf ("Ingresa tu altura (en metros)\n");
	scanf ("%f", &altura);
	imc=peso/altura;
	puts (nombre);
	printf ("Edad: %d\n", edad);
	printf ("Peso: %f\n", peso);
	printf ("Altura: %f\n", altura);
	printf ("IMC: %f\n", imc);
	getch ();
}
