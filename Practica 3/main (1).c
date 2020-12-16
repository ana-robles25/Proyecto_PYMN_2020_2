//Practica 3, la de Fibo 

#include <stdio.h>
int main() {
float qui, t1 = 0, t2 = 1, siguiente;
int i, n;
printf("ingrese un numero de terminos: ");
scanf("%d", &n);
printf("Serie de Fibonacci:\n");
for (i = 1; i <n; ++i) {
printf("%.0f, ", t1);
siguiente = t1 + t2;
qui = t2/t1;
t1 = t2;
t2 = siguiente;
}
printf("%.0f\n",t1); /*termino final*/
return 0;
}
