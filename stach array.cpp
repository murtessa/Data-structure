#include<iostream>
using namespace std;
const int UPPERLIMIT=20;
static int stach [UPPERLIMIT];
int TOP=-1;
void push(int item)
{
	TOP=TOP+1;
	if(TOP<UPPERLIMIT){
		stach[TOP]=item;
		cout<<stach[TOP]<<endl;
	}
	else
	cout<<"stach overflow\n";
	
}
int pop()
{
	int null;
	//int stach[]={2,4,7,9,5};
	int del_val;
	if(TOP==-1)
	cout<<"stach underflow\n";
	else{
	
	del_val=stach[TOP];
	stach[TOP]=null;
	TOP=TOP-1;
}
	return del_val;
	
}

int main()
{
//	push(7);
//	push(5);
//	push(8);
//	push(3);
	int x=pop();
	cout<<"the deleted elements\n";
	cout<<x;
	
}
