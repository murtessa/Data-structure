#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *top=NULL;
void push(int item)
{
	node *newnode=new node();
	newnode->data=item;
	if(top==NULL)
	{
		top=newnode;
		newnode->next=NULL;
	}
	else
	{
		newnode->next=top;
		top=newnode;
	}
}
void pop()
{
	if(top==NULL)
	   cout<<"stack underflow\n";
	   else
	   {
	   	node *t=top;
	   	top=top->next;
	   	delete t;
	   }
}
void display()
{
	node* temp=top;
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
	  push(a[i]);
	  display();
	  cout<<"\n";
	  for(int i=0;i<3;i++)
	    pop();
	    cout<<"Stack elements after popping the last 3 elements\n";
	   display();
	return 0;
}
