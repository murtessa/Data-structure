#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *rear,*front=NULL;
void enqueue(int item)
{
	node *newnode=new node();
	newnode->data=item;
	newnode->next=NULL;
	if(front==NULL)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
void dequeue()
{
	if(front==NULL)
	   cout<<"Queue is Empty\n";
	   else
	   {
	   	node *t=front;
	   	front=front->next;
	   	delete t;
	   }
}
void display()
{
	node* temp=front;
	while(temp!=NULL)
	 {
	 	cout<<temp->data<<" ";
	 	temp=temp->next;
	 }
}
int main()
{
	int a[5]={1,2,3,4,5};
	 for(int i=0;i<5;i++)
	  enqueue(a[i]);
	  display();
	  cout<<"\n";
	  for(int i=0;i<3;i++)
	    dequeue();
	    cout<<"Queue elements after deleting the first 3 elements\n";
	   display();
	return 0;
}
