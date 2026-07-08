#include<stdio.h>
#include<string.h>
int main(){


int n,m;
scanf("%d%d",&n,&m);
int arr[m];
for(int i=1;i<=m;i++){
    arr[i]=i;
    arr[m]='\0';
}

for(int i=0;i<n;i++)
{
  int left,right;
  scanf("%d%d",&left,&right);

  for(int i=1;i<=m;i++)
  {
    if(i<left||i>right){arr[i]=i;}
  }

   for(int k=0;k<m;k++){printf("%d",arr[k]);}
}




    return 0;
}