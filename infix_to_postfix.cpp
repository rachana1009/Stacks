#include<bits/stdc++.h>
using namespace std;

int prec(char x)
{
    if(x=='^')
    return 3;
    else if(x == '/' || x =='*')
    return 2;
    else if(x =='+'|| x =='-')
    return 1;
    else
    return -1;
}

void infix_postfix(string exp)
{
    stack <char>s;
    string res;
    for(int i=0;i<exp.length();i++)
    {
        char c=exp[i];
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'))
        res+=c;
        else if(c=='(')
        s.push('(');
        else if(c==')')
        {
            while(s.top()!='(')
            {
                res=res+s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            while(!s.empty()&&(prec (exp[i])<= prec( s.top())))
            {
                res+=s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while(!s.empty())
    {
        res += s.top();
        s.pop();
    }

    cout<<"Postfix expression is:"<<res<<endl;
}

int main()
{
    string s;
    cout<<"Enter the infix string:";
    cin>>s;
    infix_postfix(s);
    return 0;
}