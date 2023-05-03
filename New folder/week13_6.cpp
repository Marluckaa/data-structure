#include <stdio.h>
//inorder
void myFunction(int n){
	if(n==0) return;
	else{
		myFunction(n-1);
		printf("%d", n);
		myFunction(n-1);
	}

}
int main(){
	int a=3;
	myFunction(a);
	return 0;
}
