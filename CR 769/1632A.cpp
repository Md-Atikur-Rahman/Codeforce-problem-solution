#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt; cin>>tt;
    while(tt--)
    {
        int n; cin>>n;
        string s; cin>>s;

        if(n>2 || s=="00" || s=="11")cout<<"NO\n";
        else cout<<"YES\n";
    }

    return 0;
}