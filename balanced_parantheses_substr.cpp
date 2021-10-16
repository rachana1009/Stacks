#include<bits/stdc++.h>
using namespace std;
 
    int longestValidParentheses(string str) {
        int n=0,num=0;
        char x;
        stack<char>s;
    //     for(int i=0;i<str[i];i++)
    //     {
    //         if((str[i]=='(') && (s.empty()))
    //         {
    //             s.push(str[i]);
    //             continue;
    //         }
            
    //         else if((str[i]==')') && (s.empty()))
    //         {
    //             continue;
    //         }
        
    //         else if(str[i]==')')
    //         {
    //             char x;
    //               x=s.top();              
    //             if(x=='(')
    //             {
    //                 s.push(str[i]);
    //                     n++;
    //             }
    //             else if(x==')')
    //                 break;
    //         }

    //         else
    //         {
    //             char x;
    //             x=s.top();
    //             if(x=='(')
    //             {
    //             s.pop();
    //             if(!s.empty())
    //             break;
    //             else
    //             s.push(str[i]);
    //             }
    //             else
    //             s.push(str[i]);
    //         }
       
    // }
    //      return n*2;
};

int main()
{
    string s;
    cout<<"Enter the string:";
    cin>>s;
    int res=longestValidParentheses(s);
    cout<<res;
}