#include<iostream>
using namespace std;
#define SIZE 5
	int queue[SIZE];
	int rear=-1,front=-1,queuesize=0;
void enqueue(int data)
{
	if(rear<SIZE-1)
	{
		rear++;
		queue[rear]=data;
		queuesize++;
		if(front==-1)
		front++;
	}
	else
	cout<<"queue overflow\n";
}
void dequeue()
{
	if(queuesize>0)
	{
		front++;
		queuesize--;
	}
  else
	 cout<<"queue underflow\n";
}
void display()
{
	for(int i=front;i<=rear;i++)
	cout<<queue[i]<<" ";
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
	    cout<<"queue elements after deleting the first three elements\n";
	   display();
	return 0;
}
