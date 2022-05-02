#include <stdio.h>

int main(){
  int a,i,j;
  printf("Ingrese un valor: ");
  scanf("%d",&a);
  for(i=0;i<a;i++){
    for(j=0;j<a-1;j++){
      printf(" ");
    }
    for(j=-1;j<i;j++){
      printf("*");
    }
    printf("\n");
  }
  for(i=0;i<a;i++){
    for(j=0;j<i;j++){
    printf("\n");
      printf(" ");
    }
    for(j=a;j>i;j--){
      printf("*");
    }
    printf("\n");
  }
}


/*Salida para a=7: 

      *
      **
      ***
      ****
      *****
      ******
      *******
*******
 ******
  *****
   ****
    ***
     **
      *
      
*/     
      
      
