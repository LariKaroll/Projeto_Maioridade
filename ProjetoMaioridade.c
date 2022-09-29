#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(){
	int n1;
	
	printf("Digite sua idade:");
	scanf("%d", &n1);
	
	if(n1>=18){
		printf("Voce e maior de idade: %d ", n1);
	} else{
		printf("Voce e menor de idade: %d", n1);
		}
}
