#include<stdio.h>
int main()
//update
{
  int i,t,n=5,m,s,j=0,b[10];
  int arr[]={1,3,4,8,9};
  for(i = 0; i<n; i++) 
      printf("arr[%d] = %d \n", i, arr[i]);
  
  printf("\nEnter the position to be update:");
  scanf("%d",&t);
  printf("\nEnter the value to be update:");
  scanf("%d",&s);
  for(i=0;i<n;i++)
  {
    if(i==t)
    {
       arr[i]=s;
    }
  }
  printf("\nUpdated value is:");
  for(i=0;i<n;i++)
  {
    printf("\narr[%d]=%d",i,arr[i]);
  }
  return 0;
}


