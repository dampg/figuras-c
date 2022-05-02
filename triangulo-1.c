#include <stdio.h>

int main(){
	int a,i,j;
	printf("Ingrese un numero: ");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(j=0;j<a-i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}


/*
Salida para a=7:

0123456
 012345
  01234
   0123
    012
     01
      0

*/
