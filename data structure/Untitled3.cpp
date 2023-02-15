#include<stdio.h>
int main()
{
	int a=1;
	char b='a';
	double c=3.141592;
	
	int* d=&a;
	char* e=&b;
	double* f=&c;
	int** g=&d;
	
	printf("%d %c %f %d", *d,*e,*f,**g);
	return 0;


}

