#include <stdio.h>
#include <math.h>

/***********************************************************************
 *  Funcao aleatorio() gera um numero pseudo-aleatorio uniformemente no
 * 	intervalo [0,1) 
 **********************************************************************/
double aleatorio()
{
	// Nao altere esta funcao!!!
	static long int x = 947236;
	long int a = 16807, m = 2147483647;

	x = a*x % m;

	return ((double) x)/m; 
}

double p(double x){
			return 1.052*exp(-x);}


/***********************************************************************
 *** Nao mude a funcao acima 
 **********************************************************************/
#define N 100000
int main (void)
{
	int i,j,k;
	int M = 100;
	double INT, h;
	double x[N], x2[N];
	double xmin = 0., xmax=3.;
	double dx = (xmax-xmin)/M;
	int count[M];
	
	for(k=0;k<M;k++){
			count[k]=0;

			}

	for(i=1; i<=N; i++){
	x[i]= aleatorio();
	x2[i]= -log(1- x[i]/1.052);
	//printf("x2 %lf\n", x2[i]);
	
}
	
	for(j=0;j<M;j++){

		for(i=0;i<N;i++){
			if( (xmin +j*dx<x2[i]) && (x2[i]<xmin +(j+1)*dx) ){
count[j]=count[j]+1;
		}
			}
		printf("%lf %lf \n", xmin+j*dx+dx/2., count[j]/(N*dx));
								}

	return 0;
}









