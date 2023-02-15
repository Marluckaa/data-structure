#include<stdio.h>
int main()
{
	int a=1;
	char b='a';
	double c=3.141592;
	
	int* d=&a;
	char* e=&b;
	double* f=&c;
	printf("%d %d %d", d,e,f);
	return 0;


}

