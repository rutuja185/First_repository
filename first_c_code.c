#include<stdio.h>
int main() {
  int maxlen=10;                
  int arr[10]; 
  int i;
  for(i=0;i<maxlen;i++)
  {
    arr[i]=rand()%100;
   } 
  int sum=0;
  for(i=0;i<maxlen;i++)
  {
    printf("%d\n",arr[i]);
    sum+=arr[i];
  }
  printf("Sum of array elements is %d\n",sum);
  return 0;
}
