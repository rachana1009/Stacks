#include<iostream>
using namespace std;
#define len 10
class Stack
{
    // int top;
    public:
    int top;
    int arr[len];
    Stack()
    {
        top=-1;
    }
    bool push(int);
    int pop();
    int peek();
    bool isEmpty();
    void display(Stack);
};


bool Stack::push (int data)
{
    if(top>=(len-1))
    {
        cout<<"Stack Overflow";
    }
    else
    {
        arr[++top]=data;
        cout<<data<<" is pushed into array"<<endl;
    }
    return true;
}

int Stack:: pop()
{
    if(top<0)
    {
    cout<<"Stack Underflow"<<endl;
    return -1;
    }
    else
    {
        int data=arr[top];
        top--;
        return data;
    }
}

int Stack:: peek()
{
    if(top<0)
    {
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    else
    {
        int data=arr[top];
        return data;
    }
}

bool Stack :: isEmpty()
{
    return (top<0);
}

void Stack:: display (Stack s)
{
    for(int i=s.top;i>=0;--i)
    {
        cout<<s.arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    class Stack s;
    s.push(30);
    s.push(40);
    s.push(60);
    s.pop();
    s.display(s);
    // cout<<"Elements present in stack : ";
    // while(!s.isEmpty())
    // {
    //     cout<<s.peek()<<" ";
    //     s.pop();
    // }
}