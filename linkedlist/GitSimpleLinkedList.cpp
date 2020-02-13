#include<iostream>
using namespace std;

class node 
{
	public:
	int data;
	node* next;
};
static int count=0;
int main()
{
	node n1,n2,n3,n4,n5; //creating 5 nodes
	
	n1.data=10;
	n1.next=NULL; 		//created node 1(jhgsjdvbj)
	
	n2.data=20;
	n2.next=NULL; 		//created node 1
	
	n1.next=&n2;		//connected node n1 to n2
	
	n3.data=30;
	n3.next=NULL; 		//created node 1
	
	n2.next=&n3;		//connected node n2 to n3
	
	n4.data=40;
	n4.next=NULL; 		//created node 1
	
	n3.next=&n4;		//connected node n3 to n4
	
	n5.data=50;
	n5.next=NULL; 		//created node 1
	
	n4.next=&n5;		//connected node n4 to n5
	
	n5.next=NULL;
	
	node *temp=&n1;		//using a temporaray pointer node type variable to traverse
	cout<<"Code for traversing all nodes"<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}

	// and similarly the rest of the code works
	cout<<" "<<endl;
	
	
	node n6;
	n6.data=100;
	n6.next=&n4;
	
	n3.next=&n6;
	cout<<"code for inserting a node"<<endl;

	node*t=&n1;
	while(t!=NULL)
	{
		cout<<t->data<<endl;
		t=t->next;
	}
	cout<<" "<<endl;
	cout<<"code for deleting a node"<<endl;

	n3.next=&n4;
	node*tp=&n1;
	while(tp!=NULL)
	{
		count++;
		cout<<tp->data<<endl;
		tp=tp->next;
	}

	
}