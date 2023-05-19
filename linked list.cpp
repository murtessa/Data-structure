#include<iostream>
using namespace std;
struct node {
	int data;
	node *next;
	
};
 struct node *head=NULL;

void insert_at_beg (int val)
{
	node *temp;
	temp= new node;
	temp->data=val;
	if(head==NULL)
	{
		head=temp;
		temp->next=NULL;
	}
	else{
	
	temp->next=head;
	head=temp;
	
}
cout<<"the value after inserting "<<val<< " at first is "<<endl;
}
void insertAtEnd (int val)
{   
	node *temp,*temp1;
	temp= new node;
	temp->data=val;
	temp->next=NULL;
	if (head==NULL)
	head=temp;
	else {
		temp1=head;
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		temp1->next=temp;
	}
	cout<<"the value after inserting "<<val<< " at end  is "<<endl;
}
void insertAtPosition (int val,int pos)
{
		node *newnode=new node();
		node *temp= head;
		newnode->data=val;
		if(head==NULL)
		{
			head=newnode;
			newnode->next=NULL;
			
		}
		else if(head->next==NULL)
		{
			newnode->next=head;
			head=newnode;
		}
		else
		{
			if(pos==1)
			{
				newnode->next=head;
			head=newnode;	
			}
			else{
			
			
			node *temp1=head;
			for(int i=1;i<pos;i++)
			{
			temp1=temp;
				temp=temp->next;
			}
		//	newnode->next=temp->next;
	//	temp->next=newnode;
	temp1->next=newnode;
	newnode->next=temp;
	 
	}
			
		}
		cout<<"the value after inserting "<<val<< " at position  "<<pos<<" is "<<endl;
	}
	void deleteatbeg()
	{
	
	node *temp;
	if(head==NULL){
		cout<<"no elements/n";
	}

	else 
	{
		temp=head;
		head=head->next;
		delete temp;
	}
	cout<<"the value after deleting from beggining is :"<<endl;
	}
	void delteatend()
	{
		node *temp1;
		node *temp2;
		temp1=head;
		if(head==NULL){
			cout<<"no elment/n";
		}
		else if(temp1->next==NULL){
			head=NULL;
			delete temp1;
		}
		else
		{
			while(temp1->next!=NULL){
				temp2=temp1;
				temp1=temp1->next;
			}
			delete temp1;
			temp2->next=NULL;
		}
		cout<<"elemnts after deleted from ending"<<endl;
	}
	void deleteatLocatiion(int pos)
	{
	node *temp=head;
	node *temp2;
	if(head==NULL){
		cout<<"n elements/n";
	} 
	else if(head->next==NULL)
	{
	temp=head;
		head=NULL;
		delete temp;	
		}	
	else
	{
		if(pos==1)
		{
		temp=head;
		head=head->next;
		delete temp;
			
		}
		else{
	
		
		for(int i=1;i<pos;i++){
		
		temp2=temp;
		temp=temp->next;
	}
	temp2->next=temp->next;
	delete temp;
}}
cout<<"elements after deleted at specific postion"<<endl;
	}

void display ()
{
	node *temp;
	temp=head;
	while(temp!=NULL){ 
	
	cout<<temp->data<<"  ";
  	temp=temp->next;
}
cout<<endl;	
}

int main ()
{
insert_at_beg (1);
display ();
 
insert_at_beg (2);
display ();
insert_at_beg (3);
display ();
insert_at_beg (4);
display ();
insert_at_beg (5);
display ();
insertAtEnd (1);
display ();
insertAtEnd (2);
display ();
insertAtEnd (3);
display ();
insertAtEnd (4);
display ();
insertAtEnd (5);	
display ();
insertAtPosition (1,1);
display();
deleteatbeg();
display ();
 delteatend();
 display ();
 deleteatLocatiion(1);
  display ();
return 0;
}



