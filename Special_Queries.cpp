// Note: There can be multiple person in the line with same name. You need to solve it using STL Stack or Queue only.
#include <bits/stdc++.h>

using namespace std;



int main()
{
    queue<string> que;
    int tcs;
    cin>>tcs;
    int qry;
    string str;

    for (int i = 0; i < tcs; i++)
    {
        cin>>qry;
        if(qry == 0) 
        {
            cin>>str;
            que.push(str);
        }
        else if(qry == 1)
        {
            if(!que.empty())
            {
                cout<<que.front()<<endl;
                que.pop();
            }
            else cout<<"Invalid\n";
        }
    }
    return 0;
}