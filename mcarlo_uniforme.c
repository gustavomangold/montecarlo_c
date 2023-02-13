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


#define N 100000
void  main(){

        int i,j;
	double x[N], y[N];
	// Exemplo de uso da funcao para obter 2 numeros diferentes em [0:1)
	
	for(i=1; i<=N; i++){
	x[i]= aleatorio();

	//printf("%d %lf\n",i,x[i]);
	
	
}
    for(j=1; j<=N; j++){
	y[j]= aleatorio();

	//printf("%d %lf\n",j,y[j]);
	
	
}
		

		
		double count=0,INT, h,v, xmin=0., xmax=3., ymin=0., ymax=0.42, soma=0, medio=0;

		for(i=1;i<=N;i++){
				
				
				h=x[i]*(xmax - xmin);
				v=y[i]*(ymax - ymin);
				if (v<f(h)){
						count=count+  1;
					
					}
		INT=(count/N)*((xmax-xmin)*(ymax-ymin));
		
						}
		printf("I = %lf\n",INT);

		








		}


											
            
