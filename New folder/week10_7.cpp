#include <stdio.h>
int searchArray_re1(int arr[], int n, int k){
	
		if(arr[n]==k) return n;
		else{
			searchArray_re1(arr,n-1,k);
		}
}
int main(){
	int a[]={0,11,22,34,41,59,63,75,82,90};
	printf("index: %d", searchArray_re1(a,9,59));
	
	return 0;
}
