#include <stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>


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


double p(double x){
			return 1.052*exp(-x);}

#define N 100000
void  main(){

        int i,j;
	double soma;
	double x[N], x2[N];
	double count=0,INT=0, h,v, xmin=0., xmax=4., ymin=0., ymax=1.;
	
	
	for(i=1; i<=N; i++){
	x[i]= aleatorio();
	x2[i]= -log(1- x[i]/1.052);
	INT=INT+f(x2[i])/p(x2[i]);
}
	
			
		printf("I = %lf\n",INT/N);

		}


											
            
