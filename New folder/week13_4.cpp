#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *left_child;
	struct node *right_child;
};
struct node* createNode(int data){
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=data;
	new_node->left_child=NULL;
	new_node->right_child=NULL;
	
	return new_node;
}
int main(){
	struct node *root=createNode(1);
    root->left_child=createNode(2);
    root->right_child =createNode(3);
    root->left_child->left_child=createNode(4);
	
	/*root->left_child=left;
	root->right_child=right;*/
	
	printf("%d\n", root->data);
	printf("%d\n", root->left_child->data);
	printf("%d\n", root->right_child->data);
	printf("%d\n", root->left_child->left_child->data);
	
	return 0;
	
}
