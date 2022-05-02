#include <stdio.h>

int main(){
	int a,i,j,b=97;
	printf("Ingrese un numero: ");
	scanf("%d",&a);
	for(i=0;i<a*2;i+=2){
		for(j=a*2;j>i+2;j-=2){
			printf(" ");
		}
		for(j=0;j<i+1;j++){
			printf("%c",b);
		}
		printf("\n");
		b++;
	}
}

/*Salida para a=7:
 
      a
     bbb
    ccccc
   ddddddd
  eeeeeeeee
 fffffffffff
ggggggggggggg

*/

