// Methond 1   By using hash


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


//Method 2 by using sorting


#include <bits/stdc++.h>

using namespace std;
vector<int> fun(vector<int> &v,int n){
    
    vector<int> p;
    sort(v.begin(),v.end());
    p.push_back(v[0]);
    for(int i=1;i<n;i++)
    {
        if(v[i]!=v[i-1])
        {
            p.push_back(v[i]);
        }
       
    }
    return p;
}
int main()
{
    int n=5;
    vector<int>v={2,2,3,2,5};
    vector<int>v1;
   
    v1=fun(v,n);
    for(auto const i:v1)
    {
        cout<<i<<" ";
    }

    return 0;
}
