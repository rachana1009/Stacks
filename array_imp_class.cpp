#include<iostream>
using namespace std;
#define size 10
class stack
{
    public:
    int arr[size];
    int top;
};

stack init()
{
    stack s;
    s.top=-1;
    return s;
}

int isFull(stack s)
{
    return (s.top==size-1);
}

int isEmpty(stack s)
{
    return (s.top==-1);
}

int peek(stack s)
{
    return (s.arr[s.top]);
}

stack push(stack s,int ele)
{
    if(isFull(s))
    cout<<"Stack overflow"<<endl;
    else
    {
        ++s.top;
        s.arr[s.top]=ele;
    }
    return s;
}

stack pop(stack s)
{
    if(isEmpty(s))
    cout<<"Stack is empty"<<endl;
    else 
    {
        cout<<"Deleted element is:"<<s.arr[s.top]<<endl;
        if(s.top==0)
        s.top=-1;
        else
        s.top--;
    }
    return s;
}

void display(stack s)
{
    if(isEmpty(s))
    cout<<"Stack underflow"<<endl;
    else
    {
        for(int i=0;i<=s.top;i++)
        cout<<s.arr[i]<<" ";
        cout<<endl;
    }
}

int main()
{
    stack s=init();
    s=push(s,30);
    s=push(s,40);
    s=push(s,50);
    s=push(s,60);
    s=push(s,70);
    s=push(s,80);
    s=pop(s);
    display(s);

}