#include <stdio.h>

int main(){
	int a,i,j;
	printf("Ingrese un numero: ");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		for(j=a-1;j>i;j--){
			printf(" ");
		}
		for(j=1;j<i+2;j++){
			printf("%d",j);
		}
		for(j=i;j>0;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}

/*
Salida para a=7: 

      1 
     121
    12321
   1234321
  123454321
 12345654321
1234567654321

*/
