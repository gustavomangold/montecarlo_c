#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

// distribuição uniforme
double aleatorio()
{
	// Nao altere esta funcao!!!
	static long int x = 947236;
	long int a = 16807, m = 2147483647;

	x = a*x % m;

	return ((double) x)/m; 
}

double f(double x){
			return pow(x,1.5)*exp(-x);				
}

#define N 100000
void  main(){
        int i,j;
	double x[N];
	
	for(i = 1; i <= N; i++){
		x[i] = aleatorio();
		x[i] = x[i]*3;

	//printf("%d %lf\n",i,x[i]);
	}
	
double INT, xmin = 0., xmax = 3., soma = 0, soma2 = 0, medio = 0, desvio = 0, variancia = 0;

for(i = 1; i <= N; i++){				
		soma = soma + f(x[i]);
		medio = soma/i;
		soma2 = soma2 + pow((f(x[i]) - medio), 2);
		variancia = soma2/(i-1);
		desvio = sqrt(variancia);	
}
printf("I = %lf (+/-) %lf\n",medio*(xmax-xmin), desvio);
}


											
            
