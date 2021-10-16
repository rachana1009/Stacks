#include<bits/stdc++.h>
using namespace std;
int longestValidParentheses(string str) {
        int n=0;
        stack<int>s;
        s.push(-1);
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='(')
            {
                s.push(i);
            }
            else
            {
                if(!s.empty())
                    s.pop();
                if(!s.empty())
                   n = max(n, i - s.top());
                else
                    s.push(i);
        }
       
        
    }
         return n;
    }

int main()
{
  string s;
  cout<<"Enter the string:";
  cin>>s;
  int res=longestValidParantheses(s);
  cout<<"Valid substring are:"<<res<<endl;
  return 0;
}
