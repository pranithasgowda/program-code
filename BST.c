
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
/*		
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *llink,*rlink;
};
typedef struct node *NODE;
NODE insert(NODE root,int key)
{
	NODE temp,cur,prev;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=key;
	temp->llink=NULL;
	temp->rlink='\0';
	if(root==NULL)
	return temp;
	prev=NULL;
	cur=root;
	while(cur!=NULL)
	{
		prev=cur;
		if(key<cur->info)
		cur=cur->llink;
		else
		cur=cur->rlink;
	}
	if(key<prev->info)
	prev->llink=temp;
	else
	prev->rlink=temp;
	return root;
	
}
void inorder(NODE root)
{
   if(root==NULL)
   return ;
   inorder(root->llink);
   printf("%d\t",root->info);
   inorder(root->rlink);	
}

void postorder(NODE root)
{
	if(root==NULL)
	return;
	postorder(root->llink);
	postorder(root->rlink);
	printf("%d\t",root->info);
}
void preorder(NODE root)
{
	if(root==NULL)
	return;
	printf("%d\t",root->info);
	preorder(root->llink);
	preorder(root->rlink);
}
void printtree(NODE root,int space,int n)
{
	int i;
	if(root==NULL)
	return;
	space+=n;
	printtree(root->rlink,space,n);
	printf("\n");
	for(i=n;i<space;i++)
	{
		printf(" ");
		printf("%d\n",root->info,space);
		printtree(root->llink,space,n);
	}
}
int main()
{
	int n,i,key;
	NODE root=NULL;
	printf("enter the number of nodes");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element:");
		scanf("%d",&key);
		root=insert(root,key);
	}
	printf("\ninorder is\n");
	inorder(root);
	printf("\npreorder is\n");
	preorder(root);
	printf("\npostorder is\n");
	postorder(root);
}*/
