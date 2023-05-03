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
void insertLeft(struct node* parent, int data){
	parent-> left_child=createNode(data);
	
}
void insertRight(struct node* parent, int data){
	parent-> right_child=createNode(data);
}
int main(){
	/*struct node *root=createNode(1);
    root->left_child=createNode(2);
    root->right_child =createNode(3);
    root->left_child->left_child=createNode(4);
	root->left_child=left;
	root->right_child=right;
	struct node* root=createNode(1);*/
	struct node *root=createNode(1);
	insertLeft(root,2);
	insertRight(root,3);
	insertLeft(root->left,4);
	insertRight(root->left,5);
	

	
	return 0;
	
}
