#include <stdio.h>
main(void){
	int num;
	
	printf("Insira um inteiro: ");
	scanf("%d", &num);
	
	if(num%3==0 && num%5==0){
		printf("O numero %d eh divisivel por 3 e 5!!", num);
	}
	else printf("O numero %d nao eh divisivel por 3 e 5!!", num);
}
