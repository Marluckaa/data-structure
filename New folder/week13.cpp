#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *left_child;
	struct node *right_child;
};
int main(){
	struct node *root=(struct node*)malloc(sizeof(struct node));
	root->data=0;
	root->left_child=NULL;
	root->right_child=NULL;
	struct node *left=(struct node*)malloc(sizeof(struct node));
	left->data=1;
	left->left_child=NULL;
	left->right_child=NULL;
	

	root->left_child=left;

	printf("%d\n", root->data);
	printf("%d\n", left->data);
	printf("%d\n", root->left_child->data);
	return 0;
	
}
