#include<conio.h>
#include<stdio.h>
#include "BTH.h"

void FindMax(TreeNode *root,TreeEntry *max){
	TreeNode *pos=root;
	while(pos->right!=NULL){
	pos=pos->right;
	}
	*max=pos->entry;
	}

int main(){

	int *max,i;

	TreeNode *node;
	int list[]={1,4,6,7,12,13,15,18,19,20,22,24};
	clrscr();
	CreateTree(&node);
	for(i=0;i<12;i++){
		  TreeNode *newnode=(TreeNode*)malloc(sizeof(TreeNode));
		  newnode->entry=list[i];
		  newnode->left=newnode->right=NULL;
		  node=InsertTree(node,newnode);
		 }

	FindMax(node,max);
	printf(" \n Max value of 1,4,6,7,12,13,15,18,19,20,22,24 is : %d",*max);
	getch();
	return 0;
	}