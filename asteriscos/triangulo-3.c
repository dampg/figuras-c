#include <stdio.h>

int main(){
  int n=5,i,j;
  for(i=0;i<n*2;i+=2){
    for(j=n*2;j>i+2;j-=2){
      printf(" ");
    }
    for(j=-1;j<i;j++){
      printf("*");
    }
    printf("\n");
  }
  for(i=2;i<n*2;i+=2){
    for(j=0;j<i;j+=2){
      printf(" ");
    }
    for(j=n*2-1;j>i;j--){
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}


