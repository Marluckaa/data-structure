#include <stdio.h>
//deletion
int main()
{
  int arr[]={1,3,4,8,9};
  int position, i, n=5, num;
  
  for(i = 0; i<n; i++) 
      printf("arr[%d] = %d \n", i, arr[i]);

  printf("hasah elementinhe bairshlig oruulna uu:\n");
  scanf("%d", &position);

  num = arr[position-1];
  
   if (position >= n+1 || position < 0)         
     printf("ustgah bolomjgui index bn\n");
  else
  {
     for (i = position - 1; i < n - 1; i++)  
//of arr index is position-1
        arr[i] = arr[i+1];
     printf("after deletion\n");
     for (i = 0; i < n - 1; i++)
        printf("%d\n", arr[i]);
  }
  return 0;
}
 
