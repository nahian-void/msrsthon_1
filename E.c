#include <stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b)
{
  return (*(int *)a - *(int *)b);
}


int main(){

int N;
scanf("%d",&N);

int m=N/2;
int arr[N];

for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);}



qsort(arr,N,sizeof(int),compare);
//for(int i=0;i<N;i++){
    //printf("%d ",arr[i]);}

int result=arr[m]-arr[m-1];

printf("%d",result);


    return 0;
}
