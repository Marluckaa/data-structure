#include <stdio.h>
void traverse(int array[],int n){
	for(int i=0;i<n;i++){
		printf("index[%d]:%d\n",array[i]);
	}
}
int main(){
	int array[]={8,21,3,2,5,55,6,58,22};
	traverse(array,10);
	return 0;
}

