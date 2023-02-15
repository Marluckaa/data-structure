#include <stdio.h>
int main(){
	int i=10;
	printf("value:%d\n",i);
	printf("address:%d\n",&i);
	i++;
	printf("value:%d\n",i);
	printf("address:%d\n",&i);
	return 0;		
}
