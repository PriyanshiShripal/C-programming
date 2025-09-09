#include <stdio.h>
int main(){
 int arr[10],i;
 printf("Enter 10 numbers:\n");
 for (i=0;i<10;i++){
    scanf("%d",&arr[i]);
 }
 printf("\n the values are : \n");
 for(i=0;i<10;i++){
    printf("%d",arr[i]);
 }
 printf("\n\n4th value=%d",arr[3]);
 printf("\n7th value=%d",arr[6]);
 printf("\n9th value=%d",arr[8]);
  return 0;
 }
