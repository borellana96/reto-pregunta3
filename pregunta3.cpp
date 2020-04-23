#include <stdio.h>
#include <string.h>

int main(){

	char subnivel[] = "spdfghi";
	int electrones;
	int i;
	int num_nivel;
	int num_subnivel;
	char nombre_elemento[50];

	do{	
	printf("Escriba el nombre del elemento: ");
	scanf("%s", &nombre_elemento);
	fflush(stdin);

	if(strcmp(nombre_elemento, "exit") == 0){
		return 0;
	}
	
	printf("Escribe el numero de electrones: ");
	fflush( stdout );
	scanf("%d", &electrones );

	for( i = 2; electrones > 0; i++ ){
   	  
   		num_subnivel = i/2;   //Devolverá el número de subnivel inicial de cada iteracion (s=1, p=2 , d=3, f=4) 
   	  
		for( num_nivel = num_subnivel + i%2; num_subnivel > 0 && electrones > 0; num_nivel++, num_subnivel-- ){
        	int num = 4 * num_subnivel - 2;	//Fórmula para devolver el número max de electrones por cada subnivel
        	if( num > electrones ){
        		num = electrones;
			}
			
			printf("%d%c%d ", num_nivel, subnivel[num_subnivel-1], num );
			
        	electrones -= num;
    	}
	}
	putchar('\n');
		
	}while(true);
	
	return 0;
}

