#include<iostream>
using namespace std;
struct arr 
{
	int size;
	int *array;
};
void creat(arr *a,int s)
{
	a->array=new int[s];
	
}
void insert(arr a,int s)
{
	cout<<"enter the elements of array\n";
	for(int i=0;i<s;i++)
	cin>>a.array[i];
}
void display(arr a,int s)

{
	cout<<"the array elements are\n";
	for(int i=0;i<s;i++)
	cout<<a.array[i]<<endl;
}
void search(arr a,int s)
{
	int c=0;
	int x;
	cout<<"enter the number to searched\n";
	cin>>x;
		for(int i=0;i<s;i++)
		{
			if(a.array[i]==x){
				c++;
			}
		
		}
		if(c>0)
		cout<<"yes\n";
		else
		cout<<"nono\n";
}
void delet(arr a,int s)
{
	int d;
	cout<<"enter the elements to deleted\n";
	cin>>d;
		for(int i=0;i<s;i++)
		{
			if(a.array[i]==d)
			{
				break;
		}
		if(i<s){
		
			for(int j=i;j<s-1;j++)
			a.array[j]=a.array[j+1];
	}
		}
		cout<<"elments affter deleted\n";
			for(int i=0;i<s;i++)
			cout<<a.array[i]<<endl;
}
int main()
{
	 arr a;
	int size;
	cout<<"enter the size of array\n";
	cin>>a.size;
	creat(&a,a.size);
	insert(a,a.size);
	display(a,a.size);
	search(a,a.size);
	delet(a,a.size);
	return 0;
}
