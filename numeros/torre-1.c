#include <stdio.h>

int main(){
  int n=4,i,j,k=2;
  for(i=1;i<n;i++){
    for(j=0;j<2;j++){
      printf("%d",k-j);
    }
    printf("\n");
    printf(" ");
    for(j=0;j<2;j++){
      printf("%d",k+j);
    }
    printf("\n");
    k+=2;
  }

  return 0;
}
/*
21
 23
43
 45
65
 67
*/



