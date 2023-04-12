#include <stdio.h>
void printArray(int arr[], int start, int end){
	if(start == end) printf("%d", arr[start]);
	else{
		int mid = (start+ end)/2;
		printArray(arr,start,mid);
		printArray(arr,mid+1,end);
	}
}
int main(){
	int a[]={0,1,2,3,4,5,6,7,8,9};
	printArray(a,0,9);
	return  0;
}
