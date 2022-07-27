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
void bubble_sort(int array[], int n){
  int i, j;
  for(int i = 0;i<n-1;i++){
    for(int j = 0;j<n-i-1;j++){
      if(array[j]>array[j+1]){
        int temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
  for(int i = 0;i<n;i++){
    printf("%d  ", array[i]);
    }
}
void insertion_sort(int array[], int n){
  int i, key, j;
  for(i = 1;i<n;i++){
    key = array[i];
    j = i-1;
    while(j>=0 && array[j]>key){
      array[j+1] = array[j];
      j = j-1;
    }
    array[j+1] = key;
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
  return 0;
}
 
