#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
};

node *top=NULL;

node* push(int data,node* top)
{
    node* nnode=new node();
    nnode->data=data;
    if(top==NULL)
    {
        top=nnode;
        nnode->next=NULL;
    }
    else
    {
        node* temp=top;
        nnode->next=top;
        top=nnode;
    }
    return top;
}

node* pop()
{
    if(top==NULL)
    cout<<"Stack Underflow"<<endl;
    else
    {
        node*temp=top;
        cout<<"Value deleted is:"<<temp->data<<endl;
        top=temp->next;
        delete(temp);
    }
    return top;
}

void display(node* top)
{
    if(top==NULL)
    cout<<"Stack Underflow"<<endl;
    else
    {
        node*temp;
        temp=top;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}

int main()
{
    top=push(32,top);
    top=push(40,top);
    top=push(60,top);
    top=pop();
    display(top);
}
