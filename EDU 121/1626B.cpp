#include<bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define ull unsigned long long
#define PB push_back
#define All(x) (x).begin(),(x).end()
#define MP make_pair
#define nl "\n"
typedef pair<int,int>PII;
typedef vector<int>VI;
typedef vector<PII>VPII;
typedef vector<VI>VVI;
typedef vector<long long>VL;
typedef vector <VL>VVl;
template<class T> void print(T& a) { for(auto x:a)cout<<x<<" "; cout<<"\n";}
template <typename T> vector<T> sort_unique(vector<T> vec) { sort(vec.begin(), vec.end()), vec.erase(unique(vec.begin(), vec.end()), vec.end()); return vec; }
const long double PI = 3.14159265358979;
const long double EPS=1e-9;

void Engine()
{
    string s; cin>>s;
    int len=s.length();
    int val;
    for(int i=len-1; i>0; i--)
    {
        val=s[i]-'0';
        val+=s[i-1]-'0';
        if(val>=10)
        {
            for(int j=0; j<i-1; j++)cout<<s[j];
            cout<<val;
            for(int j=i+1; j<len; j++)cout<<s[j];
            cout<<nl;
            return;
        }
    }
    val=s[0]-'0';
    val+=s[1]-'0';

    cout<<val;
    for(int i=2; i<len; i++)cout<<s[i];
    cout<<nl;
}

int main()
{
    FastIO
    int tt=1;
    cin>>tt;
    while(tt--)
    {
        Engine();
    }
    return 0;
}  