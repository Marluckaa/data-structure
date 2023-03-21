#include <stdio.h>
//insertion
int main(){
	int arr[]={1,3,4,8,9};
	int i,n=5,value;
	for(i = 0; i<n; i++) 
      printf("arr[%d] = %d \n", i, arr[i]);
    
	printf("oruulah elementin utgaa oruulna uu:\n");
	scanf("%d",&value);
	printf("array:\n");
	
	arr[n]=value;
	for(i=0;i<=n;i++)
	
	printf("%d\n",arr[i]);
	
	
}


	

