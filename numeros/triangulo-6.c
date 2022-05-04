#include <stdio.h>

int main(){
  int n=4,i,j,k=1;
  for(i=0;i<n;i++){
    for(j=n-1;j>i;j--){
      printf(" ");
    }
    for(j=0;j<=i;j++){
      printf("%d ",k++);
    }
    printf("\n");    
  }
  return 0;
}

/* 

   1
  2 3
 4 5 6
7 8 9 10
  
*/


