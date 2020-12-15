#include <stdio.h>
const float g = 9.8;
float m;
float p;
int main()
{
	//Calcular la fuerza de atracción del peso de una persona// 
	printf ("Indique su masa corporal\n\n");
	scanf ("%f", &m);
	p= g*m;
	printf("La fuerza de atraccion de su peso es %f", p);
	
	
	return 0;
}

