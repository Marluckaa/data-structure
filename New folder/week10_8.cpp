#include <stdio.h>
int searchArray_re2(int arr[],int start, int end, int k){
	if(start==end){
		if(arr[start]==k) 
		return start;
		else return -1;
	}
	else{
		int mid=(start+end)/2;
		
		int left_result = searchArray_re2(arr,start,mid,k);
		
	if(left_result == -1){
		int right_result = searchArray_re2(arr,mid+1,end,k);
		return right_result;
	}
	}
	
}
int main(){
	int a[]={0,11,22,34,41,59,63,75,82,90};
	printf("index: %d", searchArray_re2(a,0,9,59));
	
	return 0;
}

