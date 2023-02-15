#include <stdio.h>
int main(){
	int i=10;
	int* j=&i;
	int** k=&j;
	printf("i value:%d\n",i);
	printf("*k value:%d\n",*k);
	printf("**k value:%d\n",**k);
	i++;
	printf("value:%d\n",i);
	printf("value:%d\n",*k);
	printf("value:%d\n",**k);

	return 0;
	
	
}
