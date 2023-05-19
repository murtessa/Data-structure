#include<iostream>
using namespace std;
void bubble(int[],int);
void insertion(int[],int);
void selection(int[],int);
void linear(int[],int,int);
void binary(int[],int,int);
int main()
{
	int a[]={7,3,2,9,4};
	int choice,ch,searchkey;
	top:
	do
	{
	cout<<"1.Bubble sort\n";
    cout<<"2.Selection sort\n";
    cout<<"3.Insertion sort \n"; 
    cout<<"4.Linear search\n";
    cout<<"5.Binary search\n";
	cout<<"enter your choice\n";
		cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Array elements before sorting\n";
			for(int i=0;i<5;i++)
			 cout<<a[i]<<" ";
			 cout<<"\n";
			 bubble(a,5);
			 break;
		case 2:
			cout<<"Array elements before sorting\n";
			for(int i=0;i<5;i++)
			 cout<<a[i]<<" ";cout<<"\n";
			 selection(a,5);
			 break;
		case 3:
			cout<<"Array elements before sorting\n";
			for(int i=0;i<5;i++)
			 cout<<a[i]<<" ";cout<<"\n";
			 insertion(a,5);
			 break;
		case 4:
			 cout<<"input the number to be searched\n";
			 cin>>searchkey;
			 linear(a,5,searchkey);
			 cout<<"\n";
			 break;
		case 5:
			 cout<<"input the number to be searched\n";
			 cin>>searchkey;
			 binary(a,5,searchkey);cout<<"\n";
			 break;
		case 6:
			exit(0);
			 default:
			 	cout<<"invalid choice\n";cout<<"\n";
	}
}
    while(choice!=6);
	return 0;
}
void bubble(int a[], int size)
{
	int i,j,temp;
 for(i=0;i<size; i++){
      for(j=0; j<size-1; j++){
            if(a[j]>a[j+1]){
    		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
}
    }
}
cout<<"Array elements after sorting\n";
for(int i=0;i<size;i++)
 cout<<a[i]<<" "; cout<<"\n";
 
}


void insertion(int a[], int size)
{
	int temp; 
for(int i=1;i<size;i++){ 
temp=a[i]; 
for(int j=i; j>0 && temp<a[j-1];j--) 
{ 
a[j]=a[j-1]; 
a[j-1]=temp; 
} 
}  
cout<<"Array elements after sorting\n";
for(int i=0;i<size;i++)
 cout<<a[i]<<" ";cout<<"\n";
	
}
void selection(int a[], int size)
{
int i,j, small,temp;
for(i=0;i<size;i++){
       small=i;
    for(j=i+1;j<size;j++){
       if(a[j]>a[small])
             small=j;
         }
	if (small!=i){
      temp=a[small];
	a[small]=a[i];
	a[i]=temp;}
         } 
	cout<<"Array elements after sorting\n";
    for(int i=0;i<size;i++)
    cout<<a[i]<<" ";cout<<"\n";
 
}
void linear(int a[], int size,int searchkey)
{
	int found=0,k;
	for(int i=0;i<size;i++)
	{
	
	 if(a[i]==searchkey)
	 {
	 
	   found++;
	   k=i;
}
}
  if(found>0)
  cout<<"Element is found at index "<<k;
  else
  cout<<"Element is not found in the array\n";
}
void binary(int a[], int size,int searchkey)
{
	int found=0,k;
	int first=0,last=size-1,mid=0;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(a[mid]==searchkey)
		{
		   cout<<"Element is found at index "<<mid;
		   found++;
		   break;
	    }
	    else
	    {
	    if(a[mid]>searchkey)
		  last=mid-1;
		else 
		  first=mid+1;
	}
	}
	if(found==0)
  cout<<"Element is not found in the array\n";
}
