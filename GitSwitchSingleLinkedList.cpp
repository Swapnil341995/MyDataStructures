#include<iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node *link;
};
Node *root = NULL;


void append()
{
	Node *temp;
	temp = new Node;
	cout<<"Enter the Node data : "<<endl;
	cin>>temp->data;
	temp->link = NULL;
	if(root == NULL)
	{
		root = temp; 
	}
	else
	{
		Node *p;
		p = root;
		while(p->link != NULL)
		{
			p = p->link;
		}
		p->link = temp;
	}
	cout<<""<<endl;
}

void printlist()
{
	
	Node *temp;
	temp = root;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->link;
	}
	cout<<""<<endl;
}

int length()
{
	Node *temp;
	temp = root;
	int count = 1;
		while(temp->link != NULL)
		{
		count++;
		temp = temp->link;
		}
	cout<<"The length of linked list is : "<<count<<endl;
	cout<<""<<endl;
	return count;
}

void appendAtBegin()
{
	Node *temp = new Node;
	cout<<"Enter the node data : "<<endl;
	cin>>temp->data;
	temp->link = NULL;
	if(root == NULL)
	{
		root = temp;
	}
	else
	{
		temp->link= root;
		root = temp;
	}
	cout<<""<<endl;
}

void appendAtMiddle()
{
	int ct;
	int i = 1;
	Node *temp;
	temp = root;
	cout<<"Enter the node count after which you want to insert new node : "<<endl;
	cin>>ct;
	while(i<ct)
	{
		temp = temp->link;
		i++;
	}
	Node *p = new Node();
	cout<<"Enter the node data : "<<endl;
	cin>>p->data;
	p->link = temp->link;
	temp->link = p;
}

void deleteNode()
{
	int loc;
	Node *temp = new Node();
	cout<<"Enter the location of node : "<<endl;
	cin>>loc;
	int len = length();
	if(loc>len)
	{
		cout<<"Node not present"<<endl;
	}
	else if(loc == 1)
	{
		temp = root;
		root=temp->link;
		temp->link = NULL;
	}
	else
	{
		Node *p,*q;
		int i = 1;
		p = root;
		while(i<loc-1){
			p = p->link;
			i++;
		}
		q = p->link;
		p->link = q->link;
		q->link = NULL;
	}
}

int main()
{
	
	int ch;
	
	while(1)
	{
		cout<<""<<endl;
		cout<<"1.append"<<endl;
		cout<<"2.Add at begin"<<endl;
		cout<<"3.Append at middle"<<endl;
		cout<<"4.Length"<<endl;
		cout<<"5.Print List"<<endl;
		cout<<"6.Delete Node"<<endl;	
		cout<<"7.Exit"<<endl;
		cout<<"\n"<<"Enter your choice : "<<endl;
		cin>>ch;
		cout<<""<<endl;
		
		switch(ch)
		{
			case 1 :{
				append();
				break;
				cout<<""<<endl;
			}
			case 2 :{
				appendAtBegin();
				break;
				cout<<""<<endl;

			}
			case 3 :{
				appendAtMiddle();
				break;
				cout<<""<<endl;

			}
			case 4 :{
				length();
				break;
				cout<<""<<endl;

			}
			case 5 :{
				printlist();
				break;
				cout<<""<<endl;
			}
			case 6 :{
				deleteNode();
				break;
				cout<<""<<endl;

			}
			case 7 :{
				exit(1);
			}
			default :
			cout<<"Invalid Input"<<endl;
		}

	}
	
}