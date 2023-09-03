//program for binary search tree
#include<stdlib.h>
#include<stdlib.h>
struct BST{
	int info;
	struct BST *left,*right;
};
typedef struct BST NODE;
NODE *insert(NODE*root,int key)
{
	if(root==NULL){
		root=(NODE*)malloc(sizeof(NODE));
		root->info=key;
		root->left=NULL;
		root->right=NULL;
		
	}
	else if(key<root->info)
	root->left=insert(root->left,key);
	else
	root->right=insert(root->right,key);
	return root;
}
void inorder(NODE *root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d\t",root->info);
		inorder(root->right);
	}
}
	void postorder(NODE*root){
		if(root!=NULL){
			postorder(root->left);
			postorder(root->right);
			printf("%d\t",root->info);
		}
	}
		void preorder(NODE*root)
		{
			if(root!=NULL)
			{
				printf("%d\t",root->info);
				preorder(root->left);
				preorder(root->right);
			}
		}
	
	void printtree(NODE*root,int space,int n)
{
	int i;
	if(root==NULL)
	return;
	space+=n;
	printtree(root->right,space,n);
	printf("\n");
	for(i=n;i<space;i++)
	{
		printf("");
		printf("%d",root->info,space);
		printtree(root->left,space,n);
	}
}
	int main(){
		int n,i,key,choice;
		NODE*root =NULL,*temp;
		printf("entr the number of nodes");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("\nenter the element");
			scanf("%d",&key);
			root=insert(root,key);
			
		}
	printf("1.inorder\n2.preorder\n3.postorder\n4.exit\n");
		while(1)
		{
	     printf("\nenter the choice");
		 scanf("%d",&choice);
			switch(choice){
			case 1: inorder(root);break;
			case 2: preorder(root);break;
			case 3:postorder(root);break;
			case 4:exit(0);break;
			default:printf("invalid");
			}
			
		}
	}
