
#include<iostream>
using namespace std;
struct node {

    int data;
    node *next;
    node *prv;

};

node *head = NULL;
node *tail = NULL;


void insertatfirst(int value){

    node *newnode = new node();
    newnode->data = value;
    
    if(head == NULL){
        head = tail = newnode;
        newnode->next=tail;
        newnode->prv=head;
        
    }
    else {
        newnode->next = head;
        head->prv = newnode;
        newnode->prv = tail;
        tail->next = newnode;
        head = newnode;  

    }
cout<<"the value after inserting " << value<< " at first is :"<<endl;
}
void insertatlast(int value){
    node *newnode = new node();
    newnode->data = value;
    if(head == NULL){
        head = tail = newnode;
        newnode->next = head;
        newnode->prv = tail;
        newnode=head;
         
    }
    else{
	
        tail->next=newnode;
        newnode->next=head;
        newnode->prv= tail;
        head->prv= newnode;
         tail = newnode;
       
}
cout<<"value after inserting "<<value<<" at last is :"<<endl;
}
    

void insertatspecific(int value, int loc){
    node *newnode = new node();
    newnode->data = value;
    node *temp = head;
    if(head == NULL){
        head = tail = newnode;
        newnode->next =tail;
        newnode->prv = head;
    }
    else {
        for (int i = 0; i < loc - 2; i++){
        temp = temp->next;
    }
    
    newnode->prv = temp;
    newnode->next= temp->next;
    temp->next->prv = newnode;
    temp->next = newnode;

    }  
cout<<"the value after adding "<<value <<" at location "<<loc<<" is"<<endl;
}
void deletefirst(){

    node *temp = head;
    if(head == NULL){
        cout << "No node to e deleted."<<endl;
    }
    else{
    head= head->next;
    head->prv = tail;
    tail->next = head;
    delete temp;}
cout<<"the value after deleting the first value is : "<<endl;
}
void deletelast(){
    node *temp = tail;
    if(head == NULL){
        cout << "No node to e deleted."<<endl;
    }
    else {
        tail = tail->prv;
        tail->next = head;
        head->prv = tail;
        delete temp;}
cout<<"the value after deleting the last value is : "<<endl;
}
void deletespacific(int loc){
    node *temp = head;
     if(head == NULL){
        cout << "No node to e deleted."<<endl;
    }
     else {
        for(int i = 0; i < loc - 1; i++)
    {
        temp = temp->next;

    }
        temp->prv->next = temp->next;
        temp->next->prv = temp->prv;
        delete temp;
    }
  cout<<"the value after deleting the value of location  "<<loc<<" is:"<<endl;

}
void display(){
   
   node *temp =tail->next;
   
  do{
        cout <<temp->data<<" ";
        temp = temp->next;

    }  while(temp!= tail->next);
    cout<<endl;
    
}

int main (){

    insertatfirst(2);
    display();
    insertatfirst(4);
    display();
    insertatfirst(1);
    display();
    insertatlast(8);
    display();
    insertatlast(6);
    display();
    insertatlast(12);
    display();
    insertatspecific(7, 3);
    display();
    insertatspecific(9, 5);
    display();
    deletefirst();
    display();
    deletelast();
    display();
    deletespacific(2);
    display();
    deletespacific(4);
    display();
    cout<<endl;



    return 0;
}

