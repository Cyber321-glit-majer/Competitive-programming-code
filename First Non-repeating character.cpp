
#include <bits/stdc++.h>

using namespace std;
char solve(string s,int n)
{
    map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(mp[s[i]]==1)
        {
            return s[i];
        }
    }
    return s[0];
}
int main()
{
    string s="abcd";
    int n=s.size();
    cout<<solve(s,n);
    
    return 0;
}
