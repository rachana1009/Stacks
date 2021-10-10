#include<iostream>
#include<stack>
using namespace std;
class mystack
{
    public:
    stack<int>s;
    int min_ele;
    void getMin()
    {
        if (s.empty())
            cout << "Stack is empty\n";
        else
            cout <<"Minimum Element in the stack is: "<< min_ele << "\n";
    }

     void peek()
    {
        if (s.empty())
        {
            cout << "Stack is empty ";
            return;
        }
        int t = s.top();
        cout << "Top Most Element is: ";
        (t < min_ele)? cout <<min_ele: cout << t;
    }
    void pop()
    {
        if (s.empty())
        {
            cout << "Stack is empty\n";
            return;
        }
 
        cout << "Top Most Element Removed: ";
        int t = s.top();
        s.pop();
        if (t < min_ele)
        {
            cout << min_ele << "\n";
            min_ele = 2*min_ele - t;
        }
 
        else
            cout << t << "\n";
    }
    void push(int x)
    {
        if (s.empty())
        {
            min_ele = x;
            s.push(x);
            cout <<  "Number Inserted: " << x << "\n";
            return;
        }
        if (x < min_ele)
        {
            s.push(2*x - min_ele);
            min_ele = x;
        }
 
        else
           s.push(x);
 
        cout <<  "Number Inserted: " << x << "\n";
    }
 
};

int main()
{
    mystack s;
    s.push(4);
    s.push(10);
    s.push(1);
    s.push(0);
    s.push(6);
    s.getMin();
    s.push(-3);
    s.getMin();
    s.pop();
    s.pop();
    s.pop();
    s.getMin();
}