#include <stdio.h>

int main(){
	int a,i,j,b=1;
	printf("Ingrese un numero: ");
	scanf("%d",&a);
	for(i=1;i<a+1;i++){
		if(b){
			for(j=i;j<a;j++){
				printf(" ");
			}
			for(j=i;j>0;j--){
				printf("%d",j);
			}
			printf("\n");
			b=0;
		}else{
			for(j=1;j<a;j++){
				printf(" ");
			}
			for(j=1;j<i+1;j++){
				printf("%d",j);
			}
			printf("\n");
			b=1;
		}
	}

	for(i=a;i>1;i--){
		if(b){
			for(j=a+1;j>i;j--){
				printf(" ");
			}
			for(j=i-1;j>0;j--){
				printf("%d",j);
			}
			printf("\n");
			b=0;
		}else{
			for(j=1;j<a;j++){
				printf(" ");
			}
			for(j=1;j<i;j++){
				printf("%d",j);
			}
			printf("\n");
			b=1;
		}
	}


}

/*Salida para a=7;

      1
      12
    321
      1234
  54321
      123456
7654321
      123456
  54321
      1234
    321
      12
      1

*/
