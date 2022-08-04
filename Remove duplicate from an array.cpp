
#include <bits/stdc++.h>

using namespace std;
vector<int> fun(vector<int> &v,int n){
    set<int>s;
    vector<int> p;
    for(int i=0;i<n;i++)
    {
        if(s.find(v[i])==s.end())
        {
            s.insert(v[i]);
            p.push_back(v[i]);
        }
    }
    return p;
}
int main()
{
    int n=5;
    vector<int>v(n);
    vector<int>v1;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    v1=fun(v,n);
    for(auto i:v1)
    {
        cout<<v1[i]<<" ";
    }

    return 0;
}
