#include <stdio.h>

int main(){
  int a,i,j;
  printf("Ingresa un numero: ");
  scanf("%d",&a);
  for(i=0;i<=a*2;i+=2){
    for(j=a*2;j>i;j-=2){
     printf(" "); 
    }
    printf("*");
    for(j=1;j<i;j++){
      printf(" ");
    }
    if(i!=0){
      printf("*");
    }
    printf("\n");
  }
  for(i=a*2;i>0;i-=2){
    for(j=a*2;j>=i;j-=2){
      printf(" ");
    }
    printf("*");
    for(j=3;j<i;j++){
      printf(" ");
    }
    if(i!=2){
      printf("*");
    }
    printf("\n");
  }
}

/*Salida para n=3:
 
   *
  * *
 *   *
*     *
 *   *
  * * 
   *

*/
