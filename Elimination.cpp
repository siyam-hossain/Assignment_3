// Note: You need to solve it using STL Stack or Queue only.
#include<bits/stdc++.h>
using namespace std;

void eliminate(string &s);
int main(int argc, char const *argv[])
{
    int tcs;
    cin>>tcs;
    while (tcs--)
    {
        string s;
        cin>>s;
        eliminate(s);
    }
    return 0;
}

void eliminate(string &s)
{
    stack<char> st;
   for (char ch : s)
   {

        if ( (!st.empty())  && (st.top() == '0' && ch == '1') ) 
        {
            st.pop(); 
        } else {
            st.push(ch);
        }
   }
    (st.empty()) ? cout<<"YES\n" : cout<<"NO\n";
}