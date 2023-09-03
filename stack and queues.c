#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	int id;
	char name[10],branch[4],specialization[20];
	struct node *llink;
	struct node *rlink;
};
typedef struct node *NODE;
NODE first,cur,temp,front;
NODE push(NODE first);
NODE display(NODE first);
NODE queue_insert(NODE front);
NODE queue_display(NODE front);
void numberofnodes(NODE first);
void number_ofnodes(NODE front);
int main()
{
	int choice;
	first=(NODE)malloc(sizeof(NODE));
	front=(NODE)malloc(sizeof(NODE));
	first=NULL;
	front=NULL;
	printf("\n1.push\n\n2.display_stack\n3.number_of_nodes_in_stack\n4.queue_insert\n5.queue_display\n6.number_of_nodes_in_queue\n7.exit\n");
	while(1)
	{
		printf("enter the option:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : first=push(first);break;
			case 2 : display(first);break;
			case 3 : numberofnodes(first);break;
			case 4: front=queue_insert(front);break;
            case 5: queue_display(front);break;
			case 6 : number_ofnodes(front);break;
			case 7 : exit(0);break;
			default : printf("invalid option");
		}
	}
}
NODE push(NODE first)
{
//	NODE temp;
	char name[10],branch[4],specialization[20];
	int id;
	temp=(NODE)malloc(sizeof(struct node));
    printf("enter the professor id:");
    scanf("%d",&id);
	printf("enter the name of the professor:");
	scanf("%s",temp->name);
	printf("enter the branch of the professor:");
	scanf("%s",temp->branch);
	printf("enter the area of specialization:");
	scanf("%s",temp->specialization);
	temp->id=id;
		if(first==NULL)
	{
		temp->llink=NULL;
		temp->rlink=NULL;
		return temp;
	}
	first->llink=temp;
	temp->rlink=first;
	temp->llink=NULL;
	return temp;
}


NODE display(NODE first)
{
	//NODE cur;
	cur=first;
	if(first==NULL)
	{
		printf("\nLIst is empty");
		return NULL;
	}
	printf("professors list:\n");
	printf("p_id\tp_name\tp_branch\tp_specialization\n");
	while(cur!=NULL)
	{
		printf("%d\t%s\t%s\t%s",cur->id,cur->name,cur->branch,cur->specialization);
		cur=cur->rlink;
		printf("\n");
	}
	return;
}
void numberofnodes(NODE first)
{
	int count=0;
//	NODE temp;
	temp=first;
	if(first==NULL)
	{
		printf(" 0 \n");
		return;
	}
	while(temp!=NULL)
	{
		count++;
		temp=temp->rlink;
	}
	printf("number of node is %d",count);
}
NODE queue_insert(NODE front)
{
	//NODE temp,cur;
	char name[10],branch[4],specialization[20];
	int id;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the professor id:");
	scanf("%d",&id);
	printf("enter the name of the professor:");
	scanf("%s",temp->name);
	printf("enter the branch of the professor:");
	scanf("%s",temp->branch);
	printf("enter the area of specialization:");
	scanf("%s",temp->specialization);
	temp->id=id;
//	strcpy(temp->name,name);	
	if(front==NULL)
	{
		temp->llink=NULL;
		temp->rlink=NULL;
		return temp;
	}
	cur=front;
	while(cur->rlink!=NULL)
	{
		cur=cur->rlink;
	}
	cur->rlink=temp;
	temp->llink=cur;
	temp->rlink=NULL;
	return front;
}

NODE queue_display(NODE front)
{
//	NODE cur;
	cur=front;
	if(front==NULL)
	{
		printf("\nLIst is empty\n");
		return NULL;
	}
	printf("professors list:\n");
	printf("p_id\tp_name\tp_branch\tp_specialization\n");
	while(cur!=NULL)
	{
		printf("%d\t%s\t%s\t\t%s",cur->id,cur->name,cur->branch,cur->specialization);
		cur=cur->rlink;
		printf("\n");
	}
	return;
}
void number_ofnodes(NODE front)
{
	int count=0;
//	NODE temp;
	temp=front;
	if(front==NULL)
	{
		printf(" 0 \n");
		return;
	}
	while(temp!=NULL)
	{
		count++;
		temp=temp->rlink;
	}
	printf("number of node is %d",count);
}
