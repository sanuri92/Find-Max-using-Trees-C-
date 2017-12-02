#include<stdio.h>
#define MAXHEIGHT 10
#define GT(a,b) ((a) >  (b))
#define LT(a,b) ((a) <  (b))
#define EQ(a,b) ((a) == (b))
#define NE(a,b) ((a)!=  (b))




typedef enum {FALSE,TRUE} Boolean;
typedef  int TreeEntry;
typedef  struct  treenode  TreeNode;

typedef struct  treenode {
		TreeEntry  entry;
		TreeNode  *left;
		TreeNode  *right;
		TreeEntry index;
		} TreeNode;

void CreateTree(TreeNode **root){
    *root=NULL;
    }


Boolean TreeEmpty(TreeNode *root){
    return root==NULL;
    }

TreeNode *InsertTree(TreeNode *root, TreeNode *newnode){
	 if (!root){
   		 root=newnode;
   		 root->left=root->right=NULL;
 		}
	else if (LT(newnode->entry, root->entry))
	    	root->left=InsertTree(root->left,newnode);
 	else
    		root->right=InsertTree(root->right,newnode);
  	 	return root;
	}

TreeNode *TreeSearch(TreeNode *root, TreeEntry target){	
	 if (root)
   		if (LT(target, root->entry))
		 	root= TreeSearch(root->left, target);
   	 else if (GT(target, root->entry))
		 	root= TreeSearch(root->right, target);
        	return root;
 	}


