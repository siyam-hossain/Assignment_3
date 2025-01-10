// Note: You cannot use any STL here. You need to implement the stack and queue by yourself. You can use linked list or array as you want.
//we cannot use SLT stack, Queues
#include <bits/stdc++.h>

using namespace std;

class _stack
{
    public:

    list<int> s;
    void push(int val)
    {
        s.push_back(val);
    }
    void pop()
    {
        s.pop_back();
    }
    int top()
    {
        return s.back();
    }
    int size()
    {
        return s.size();
    }
    bool empty()
    {
        return s.empty();
    }
};

class _queue
{
    public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int back()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

bool similar(_stack s, _queue q);

int main()
{
    int n,m;
    cin>>n>>m;

    _stack s;
    _queue q;

    int x,y;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        s.push(x);
    }
    for (int j = 0; j < m; j++)
    {
        cin>>y;
        q.push(y);
    }
    
    (similar(s,q))? cout<<"YES": cout<<"NO";
    
    
    return 0;
}
bool similar(_stack s, _queue q)
{
    //corner case
    if(s.size() != q.size()) return false;

    while (!s.empty())
    {
        if(s.top() != q.front()) return false;
        s.pop();
        q.pop();
    }return true;
}
