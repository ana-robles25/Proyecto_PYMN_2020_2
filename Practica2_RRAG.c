#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

void menu ();
void parimpar (void);
void mayormenor (void);
void formulageneral (void);
void RC (void);
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
		printf ("1.- Par e Impar\n");
		printf ("2.- Edad\n");
		printf ("3.- Formula General\n");
		printf ("4.- Registro Civil\n");
		printf ("5.- IMC\n");
		scanf ("%d", &op);
		switch (op)
		{
			case 1:
				parimpar ();
				break;
			case 2:
				mayormenor ();
				break;
			case 3:
				formulageneral ();
				break;
			case 4:
				RC ();
				break;
			case 5:
				IMC ();
				break;
			case 6:
				printf ("Hasta luego\n");
				getch ();
				break;
		}
	}while (op!=6);
}

void parimpar ()
{
	int num;
	printf ("Ingresa un numero\n");
	scanf ("%d", &num);
	if (num%2==0)
	{
		printf ("El numero es par\n");
		getch ();
	}
	else
	{
		printf ("El numero es impar\n");
		getch ();
	}
}

void mayormenor ()
{
	int num;
	printf ("Ingresa tu edad\n");
	scanf ("%d", &num);
	if (num>=18)
	{
		printf ("Mayor de edad\n");
		getch ();
	}
	else
	{
		printf ("Menor de edad\n");
		getch ();
	}
}

void formulageneral ()
{
	float x1, x2, a, b, c, exp;
	printf("Ingresa el valor de a. \n");
	scanf ("%f",&a);
	printf("Ingresa el valor de b. \n");
	scanf ("%f",&b);
	printf("Ingresa el valor de c. \n");
	scanf ("%f",&c);
	exp=(pow(b,2)-(4*a*c));
	if (exp>=0)
	{
		x1=(-b+sqrt(exp))/(2*a);
		x2=(-b-sqrt(exp))/(2*a); 
		printf ("El valor de x1 es %.2f \n",x1);
		printf ("El valor de x2 es %.2f \n",x2);
		getch ();
	}
	else
	{
		printf ("No se puede resolver al ser raiz negativa. \n");
		getch ();
	}
}

void RC ()
{
	int op;
	float ing, ti;
	printf ("Seleccione su estado civil: 1.- Soltero \t 2.- Casado\n");
	scanf ("%d", &op);
	printf ("Escriba sus ingresos mensuales (en pesos)\n");
	scanf ("%f", &ing);
	if (op==1 && ing<32000)
	{
		ti=(ing*0.2);
		printf ("Usted debe de pagar: %f", ti);
		getch ();
	}
	else if (op==1 && ing>32000)
	{
		ti=(ing*0.25);
		printf ("Usted debe de pagar: %f", ti);
		getch ();
	}
	else if (op==1 && ing<64000)
	{
		ti=(ing*0.1);
		printf ("Usted debe de pagar: %f", ti);
		getch ();
	}
	else if (op==2 && ing>64000)
	{
		ti=(ing*0.25);
		printf ("Usted debe de pagar: %f", ti);
		getch ();
	}
}

void IMC ()
{
	float al, pe, imc;
	printf ("Ingresa tu peso\n");
	scanf ("%f", pe);
	printf ("Ingresa tu altura\n");
	scanf ("%f", al);
	imc=pe/al;
	if (imc<18.5)
	{
		printf ("Peso bajo\n");
		getch ();
	}
	else if (imc>=18.5 && imc<=24.9)
	{
		printf ("Peso normal\n");
		getch ();
	}
	else if (imc>=25.0 && imc<=29.9)
	{
		printf ("Sobrepeso\n");
		getch ();
	}
	else if (imc>=30 && imc<=34.9)
	{
		printf ("Obesidad tipo 1\n");
		getch ();
	}
	else if (imc>=35 && imc<=39.9)
	{
		printf ("Obesidad tipo 2\n");
		getch ();
	}
	else if (imc>=40)
	{
		printf ("Hiper obesidad\n");
		getch ();
	}
}
