#include <stdio.h>
#include <math.h>
const float PI = 3.141592654;
float R;
float V;
int main()
{
printf("Dar el radio de la esfera\n");
scanf("%f", &R);
V=(PI*pow(R, 3))*4/3;
printf("El volumen de la esfera es %f", V);

return 0;
}
