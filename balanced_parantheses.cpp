// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

class stack
{
    public:
    char data;
    stack* next;
}*top=NULL;

stack* push(stack * top, char exp)
{
    stack *nnode=new stack;
    nnode->data=exp;
    nnode->next=top;
    top=nnode;
    return top;
}

stack * pop(stack *top)
{
    stack *temp=top;
    top=temp->next;
    delete(temp);
    return top;
}

char top_ele(stack * top)
{
    return top->data;
}

int empty(stack *top)
{
    if (top==NULL)
    return 1;
    else
    return 0;
}

int isbalanced(string exp)
{
    char x;
    for(int i=0;i<exp.length();i++)
    {
        if(exp[i]=='['||exp[i]=='{'||exp[i]=='(')
        {
            top=push(top,exp[i]);
            continue;
        }

        if(empty(top))
        return false;

        switch(exp[i])
        {
            case ']':
            x= top_ele(top);
            top=pop(top);
            if(x=='{'||x=='(')
            return false;
            break;
            
            case '}':
            x=top_ele(top);
            top=pop(top);
            if(x=='['||x=='(')
            return false;
            break;

            case ')':
            x=top_ele(top);
            top=pop(top);
            if(x=='['||x=='{')
            return false;
            break;
        }
    }
    int res=empty(top);
    return res;
}

int main()
{
    string s;
    cout<<"Enter the string:";
    cin>>s;
    int res=isbalanced(s);
    if(res==1)
    cout<<"Balanced"<<endl;
    else
    cout<<"Not Balanced"<<endl;
    return 0;
}