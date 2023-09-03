 #include<stdio.h>
 #include<stdlib.h>
 struct node{
 	int info;
 	struct node*right;
    struct node *left;
 	};
 typedef struct node *NODE;
 NODE getnode (int item){
 	NODE temp;
 	temp=(NODE)malloc(sizeof(NODE));
 	temp->info=item;
 	temp->left=temp->right=NULL;
 	return (temp);
 }
 NODE insert(int a[],int i,int n)
 {
 	NODE root=NULL;
 	if(i<n)
 	{
 		root=getnode(a[i]);
 		root->left=insert(a,2*i+1, n);
 		root->right=insert(a,2*i+2,n);
	 }
	 return root;
 }
 void inorder(NODE root)
 {
 	if(root!=NULL)
 	{
 		inorder(root->left);
 		printf("%d\t",root->info);
 		inorder(root->right);
	 }
 }
 int main()
 {
 	int a[]={1,2,3,4,5,6};
 	int n=sizeof(a)/sizeof(a[0]);
 	printf("order is give as\n");
 	NODE root=insert(a,0,n);
 	inorder(root);
 }
 
 
 
 
 
 
 
 
 
 
