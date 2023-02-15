#include <stdio.h>
int main(){
	int i=10;
	int* j=&i;
	printf("value:%d\n",i);
	printf("address:%d\n",i);
	i++;
	printf("value:%d\n",i);
	printf("address:%X %X\n",&i);
	return 0;
	
	
}
