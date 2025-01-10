// Note: You need to solve it using STL Stack or Queue only.
#include<bits/stdc++.h>
using namespace std;

void is_vld(string &s);
int main(int argc, char const *argv[])
{
    int tcs;
    cin>>tcs;
    while (tcs--)
    {
        string s;
        cin>>s;
        is_vld(s);
    }
    return 0;
}

void is_vld(string &s)
{
    stack<char> st;
   for (char ch : s)
   {
        if(!st.empty() && ( (st.top()=='0' && ch =='1')||(st.top()=='1' && ch =='0') ) )
        {
            if( (st.top()=='0' && ch =='1')||(st.top()=='1' && ch =='0'))
            {
                st.pop();   
            }
            else st.push(ch);
        }
        else st.push(ch);

        /*
            out concern is finding pair first 01 or 10,
            but if we use below approach one corner case might disrup, which is the pair 00 or 11
            ------->you can correct here (1) the conner case
        */
        // if(!st.empty())
        // {
        //     if( (st.top()=='0' && ch =='1')||(st.top()=='1' && ch =='0'))
        //     {
        //         st.pop();   
        //     }
        //  correct approact 
            //else st.push(ch);
        // }
        // else st.push(ch);
   }
    (st.empty()) ? cout<<"YES\n" : cout<<"NO\n";
}