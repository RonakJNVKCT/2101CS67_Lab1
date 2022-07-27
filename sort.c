#include<stdio.h>  
int main(){
  printf("This is a programme to sort an array using various methods");
  int n;
  printf("\nEnter number of elements : ");
  scanf("%d", &n);
  int numbers[n];
  for(int i = 0;i<n;i++){
    scanf("%d", &numbers[i]);
  }
 
