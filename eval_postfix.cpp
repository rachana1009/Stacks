#include<bits/stdc++.h>
using namespace std;

int evaluate_postfix(string exp)
{
    stack<char>s;
    for(int i=0;i<exp.length();i++)
    {
        if(isdigit(exp[i]))
        {
            s.push(exp[i]-'0');
        }
        else 
        {
            int num2=s.top();
            s.pop();
            int num1=s.top();
            s.pop();
            switch(exp[i])
            {
                case '+':
                
                s.push(num1+num2);
                break;
                case '-':
                s.push(num1-num2);
                break;
                case '*':
                // int r=num1*num2;
                s.push(num1 * num2);
                break;
                case '/':
                s.push(num1/num2);
                break;
            }
        }
    }
    int res=s.top();
    s.pop();
    return res;
}

int main()
{
    string str;
    cout<<"Enter the postfix expression:";
    cin>>str;
    int res=evaluate_postfix(str);
    cout<<"Result is:"<<res;
}