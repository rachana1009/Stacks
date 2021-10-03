#include<iostream>
using namespace std;

class stack
{
    public:
    char data;
    stack* next;
}*top;

void init()
{
    top=NULL;
}

void push(char ele)
{
    stack *s=new stack;
    s->data=ele;
    if(top==NULL)
    s->next=NULL;
    else
    s->next=top;
    top=s;
}

void pop()
{
    if(top==NULL)
    cout<<"Stack underflow"<<endl;
    else
    {
        stack *temp=top;
        cout<<"Deleted element is:"<<temp->data<<endl;
        top=temp->next;
        delete(temp);
    }
}

void display()
{
    if(top ==NULL)
    cout<<"Stack underflow"<<endl;
    else
    {
        stack *temp=top;
        while(temp!=NULL)
        {
        cout<<temp->data<<" ";
        temp=temp->next;
        }
        cout<<endl;
    }
}

int main()
{
    cout<<"Enter the "
}