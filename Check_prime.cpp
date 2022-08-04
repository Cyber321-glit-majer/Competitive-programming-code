
#include <bits/stdc++.h>

using namespace std;
bool primee(int n)
{
    int cnt=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i*i==n)
            {
                cnt++;
            }
            else
            {
                cnt+=2;
            }
        }
    }
    if(cnt==2)
    {
        return true;
    }
    return false;
    
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(primee(i)==true)
        {
           cout<<i<<" ";
        }
    }
    
    return 0;
}
