#include <stdio.h>
//search by value
int main()
{
 int arr[]={1,3,4,8,9};
 int num, i, n=5;
 
 for(i = 0; i<n; i++) 
      printf("arr[%d] = %d \n", i, arr[i]);
      
 printf("haih dugaaraa oruulna uu:\n");
 scanf("%d", &num);
 for (i = 0; i < n; i++)
 {
   if (arr[i] == num)    
   {
     printf("The element: %d is present at location %d.\n", num, i+1);

     if(i == n-1)  
     break;
   }
}
 
}
