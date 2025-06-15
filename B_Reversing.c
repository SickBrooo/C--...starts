#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);  
  int arr[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++)
  {
     if(arr[i]==0)
     {
      for(int j=0,k=i-1;j<k;j++,k--)
      {
         int swap=arr[j];
         arr[j]=arr[k];
         arr[k]=swap;
      }
     }
  }
  for(int i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
}