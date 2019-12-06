#include<stdio.h>
int main() {                
  int arr[10]; 
  int sum=0;
  for(int i=0;i<10;i++)
  {
    arr[i]=rand()%100;
   } 
  for(int i=0;i<10;i++)
  {
    printf("%d\n",arr[i]);
    sum+=arr[i];
  }
  printf("Sum of array elements is %d\n",sum);
  return 0;
}
