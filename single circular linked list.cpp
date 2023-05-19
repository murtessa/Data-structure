#include<iostream>
using namespace std;
struct node
{
	int item;
	node *next;
};
struct node *head=NULL;
struct node *last=NULL;
void insertAtbegg(int val)
{
	node *newnode=new node();
	newnode->item=val;
	if(head==NULL)
	{
		head=last=newnode;
		newnode->next=newnode;
		head=newnode;
	}
	else
	{
		newnode->next=head;
		last->next=newnode;
		head=newnode;
	}
	cout<<"The value after inserting  "<<val<<"  at first is:"<<endl;
	
}
void insertAtend(int val)
{
	node *newnode=new node();
	newnode->item=val;
	if(head==NULL)
	{
		head=last=newnode;
		newnode->next=newnode;
		head=newnode;
	}
	else
	{
	last->next=newnode;
	newnode->next=head;
	last=newnode;	
	}
	
	cout<<"The value after inserting  "<<val<<"  at end is:"<<endl;	
}
void insertAtSpecificPosition(int val,int pos)
{
		cout<<"The value after inserting  "<<val<<"  at location  "<<pos<<" is:"<<endl;
    int	lengthCounter();
   int x=lengthCounter();
    if(pos>x+1 || pos<=0)
    {
    	cout<<"there is no position  "<<pos<<" to be inserted"<<endl;
	}
	else
	{
	
	node *newnode=new node();
	newnode->item=val;
	if(head==NULL)
	{
		head=last=newnode;
		newnode->next=newnode;
		head=newnode;
	}
	
	else
	{
		node *temp=head; 
			if(pos==1)
			{
				newnode->next=head;
				last->next=newnode;
				head=newnode;
				
			}
			else
			{
			
		for (int i=0;i<pos-2;i++)
		{
			temp=temp->next;
		}	
		newnode->next=temp->next;
	    temp->next=newnode;
	}}
	//	cout<<"The value after inserting  "<<val<<"  at location  "<<pos<<" is:"<<endl;
}
}
void deleteAtBeg()
{
	cout<<"The value after deleting the first elements are"<<endl;
	node *temp;
	if(head==NULL)
	{
		cout<<"No elements to deleted"<<endl;
	}
	else if(head->next==head)
	{
		temp=head;
		head=last=NULL;
		delete temp;
		cout<<"node is deleted"<<endl;
	}
	else
	{
		temp=head;
		head=temp->next;
		
		last->next=temp->next;
		delete temp;
		
	}
//	cout<<"The value after deleting the first elements are"<<endl;
}
void deleteAtEnd()
{
	 cout<<"The value after deleting the last elements are"<<endl;	
		if(head==NULL)
	{
		cout<<"No elements are deleted"<<endl;
	}
	else if(head->next==head)
	{
		node *temp=head;
		head=last=NULL;
	   	delete temp;
		cout<<"node is deleted "<<endl;
  }
   	else
	{
     node *temp1;
     node *temp2;
     temp1=head;
     while(temp1->next!=head)
     {
     	temp2=temp1;
     	temp1=temp1->next;
	 }
 	 temp2->next=head;
	 delete temp1;
		
	}
   // cout<<"The value after deleting the last elements are"<<endl;	
}
void deleteAtSpecificPostion(int pos)
{
	 cout<<"The value after deleting the element at value of position  "<<pos<<"  is"<<endl;
	int lengthCounter();
	int x=lengthCounter();
	if(pos>x|| pos<=0)
	{
		cout<<"there is no position  "<<pos<<" to be deleted"<<endl;
	}
	else{
	
	if(head==NULL)
	{
		cout<<"There is no elements to deleted"<<endl;
	}
	else if(head->next==head)
	{
		node *temp=head;
		head=last=NULL;
		delete temp;
		cout<<"node is deleted"<<endl;
	}
 
	else
	{
		node *temp=head;
		node *temp1;
		if(pos==1)
	{
		
		temp=head;
		head=head->next;
		last->next=head;
		delete temp;
	}
	else
	{
	
		for(int i=0;i<pos-1;i++)
		{
			temp1=temp;
			temp=temp->next;
		}
		temp1->next=temp->next;
			delete temp;
	}}
  // cout<<"The value after deleting the element at value of position  "<<pos<<"  is"<<endl;
}
}
void display()
{
	
	if(head==NULL)
	{
	cout<<"There is no data to display"<<endl;
	}
	else
	{
	node *temp=head;
	do
	{
	cout<<temp->item<<"   "	;
	temp=temp->next;
	}while(temp!=head);
	}
	cout<<endl;	
	} 
	int lengthCounter()
	{
		int length=0;
	if(head==NULL)
	{
	length=0;
	}
	else
	{
		
	node *temp=head;
	do
	{
		length++;

	temp=temp->next;
	}while(temp!=head);
	
	return length;	
	}
}
	int main()
	{
	    	display();
	    insertAtbegg(1);
	    display();
	    insertAtbegg(2);
		  display();
    	insertAtbegg(3);
		   	display();
		insertAtbegg(4);
	    	display();
	    
	    	//function call for insert at end
		insertAtend(1);
			display();
		insertAtend(2);
			display();
		insertAtend(3);
			display();
		insertAtend(4);
			display();
			//function call for insert at postion
		
			insertAtSpecificPosition(3,10);
	    display();
	    //function call for delete at begging
	   deleteAtBeg();
	    display();
	    //function call for delete at specific position
	   deleteAtSpecificPostion(1);
	    display();
	    //function call for delete at end
	    deleteAtEnd();
	    display();
	     
	    
	
		return 0;
	}
	
	
	
	
	
	

