#include<iostream>
using namespace std;

class stack
{
    public:
    int data;
    stack* next;
}*top;

void init()
{
    top=NULL;
}

void push(int ele)
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
    init();
    push(30);
    push(50);
    push(70);
    push(90);
    display();
    pop();
    display();
}