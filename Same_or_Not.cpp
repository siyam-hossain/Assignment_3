//Note: You need to solve it using  Stack and Queue only.
#include <bits/stdc++.h>

using namespace std;


bool similar(stack<int>s, queue<int>q);

int main()
{
    int n,m;
    cin>>n>>m;
    stack<int> s;
    queue<int> q;
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
bool similar(stack<int>s, queue<int>q)
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
