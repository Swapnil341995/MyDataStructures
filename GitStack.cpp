#include<iostream>
using namespace std;
#define MAX 3

class Stack
{
    int arr[MAX];
    int Top;
    public :
    Stack(){ Top = -1; }
    bool push(int);
    int pop();
    int peek();
};

bool Stack :: push(int x){
    if( Top >= MAX - 1 )
    {
        cout<<"stack overflow!!!"<<endl;
        return false;
    }
    else
    {
        arr[++Top] = x;
        cout<<"Top is "<<Top<<endl;
        cout<<x<<" is pushed "<<endl;
        return true;
    }
}

int Stack :: pop(){
    if(Top < 0){
        cout<<"stack underflow!!!"<<endl;
        return 0;
    }
    else
    {
        int y = arr[Top--];
        cout<<y<<" popped"<<endl;
        return y;
    }
    
}

int Stack :: peek(){
    if(Top < 0){cout<<"Stack is empty!!!"<<endl;}
    else{
        cout<<arr[Top]<<" element is present at top of stack"<<endl;
        return arr[Top];
    }
}

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    s.peek();
}