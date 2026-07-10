#include <stdio.h>
#include <string.h>

int main(){

int N;
scanf("%d",&N);

int m=N/2;
int arr[N];

for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);}

    for (int i=0; i<N;i++){
          
         for(int j=0;j<N-1;j++)
          {
            if(arr[j]<arr[j+1]){continue;}
            else{int temp = arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
            
            }


          }
    }

//for(int i=0;i<N;i++){
  //  printf("%d ",arr[i]);}

int result=arr[m]-arr[m-1];

printf("%d",result);


    return 0;
}
