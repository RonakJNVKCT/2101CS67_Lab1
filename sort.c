#include<stdio.h>  
void selection_sort(int array[], int n){
  for(int i = 0;i<n-1;i++){
    for(int j = i+1;j<n;j++){
      if(array[i]>array[j]){
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
  for(int i = 0;i<n;i++){
      printf("%d  ", array[i]);
    }
}
        
int main(){
  printf("This is a programme to sort an array using various methods");
  int n;
  printf("\nEnter number of elements : ");
  scanf("%d", &n);
  int numbers[n];
  for(int i = 0;i<n;i++){
    scanf("%d", &numbers[i]);
  }
 
