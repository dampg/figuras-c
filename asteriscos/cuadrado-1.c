#include <stdio.h>

int main(){
  int n=6,i,j;
/*  
  printf("Ingrese un numero: "); 
  scanf("%d",&a);
*/
  for(i=0;i<n+1;i++){
    printf("*");
  }
  printf("\n");
  for(i=0;i<n-1;i++){
    printf("*");
    for(j=0;j<n-1;j++){
      printf(" ");
    }
    printf("*");
    printf("\n");
  }
  for(i=0;i<n+1;i++){
    printf("*");
  }
}
