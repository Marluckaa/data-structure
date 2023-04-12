#include <stdio.h>
int searchArray(int arr[], int n, int k){
	for(int i=0; i<=n;i++){
		if(arr[i]==k) return i;
	}
	return -1;
}
int main(){
	int a[]={0,11,22,34,41,59,63,75,82,90};
	printf("index: %d", searchArray(a,9,59));
	
	return 0;
}
