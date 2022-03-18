/*
    Md. Atikur Rahman
    Information and Communication Engineering
    University of Rajshahi
    atik9991234@gmail.com
 */
#include <bits/stdc++.h>
using namespace std;

#define setinf(ar) memset(ar, 126, sizeof ar)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define S(X) ((X) * (X))
#define SZ(V) (int)V.size()
#define FORN(i, n) for (int i = 0; i < n; i++)
#define FORAB(i, a, b) for (int i = a; i <= b; i++)
#define FORBA(i, b, a) for (int i = b; i >= a; i--)
#define ALL(V) V.begin(), V.end()
#define ALLR(V) V.rbegin(), V.rend()
#define IN(A, B, C) ((B) <= (A) && (A) <= (C))
#define AIN(A, B, C) assert(IN(A, B, C))

#define nl "\n"

#define ll long long int
#define xx first
#define yy second
#define pb(x) push_back(x)
#define PI acos(-1.0)

#define PII pair<int, int>
#define PLL pair<long long int, long long int>
#define VI vector<int>
#define VL vector<long long int>
#define VPII vector<PII>
#define VPLL vector<PLL>

#define BOUNDARY(i, j, r, c) ((i >= 0 && i < r) && (j >= 0 && j < c))
#define max3(x, y, z) MAX(MAX(x, y), MAX(y, z))

#define front_zero(n) __builtin_clzll(n)
#define back_zero(n) __builtin_ctzll(n)
#define total_one(n) __builtin_popcountll(n)

template <typename T>
int SIZE(T(&t))
{
    return t.size();
}
template <typename T, size_t N>
int SIZE(T (&t)[N])
{
    return N;
}
string to_string(char t)
{
    return "'" + string({t}) + "'";
}
string to_string(bool t)
{
    return t ? "true" : "false";
}
string to_string(const string &t, int x1 = 0, int x2 = 1e9)
{
    string ret = "";
    for (int i = min(x1, SIZE(t)), _i = min(x2, SIZE(t) - 1); i <= _i; ++i)
    {
        ret += t[i];
    }
    return '"' + ret + '"';
}
string to_string(const char *t)
{
    string ret(t);
    return to_string(ret);
}
template <size_t N>
string to_string(const bitset<N> &t, int x1 = 0, int x2 = 1e9)
{
    string ret = "";
    for (int i = min(x1, SIZE(t)); i <= min(x2, SIZE(t) - 1); ++i)
    {
        ret += t[i] + '0';
    }
    return to_string(ret);
}
template <typename T, typename... Coords>
string to_string(const T(&t), int x1 = 0, int x2 = 1e9, Coords... C);
template <typename T, typename S>
string to_string(const pair<T, S> &t)
{
    return "(" + to_string(t.first) + ", " + to_string(t.second) + ")";
}
template <typename T, typename... Coords>
string to_string(const T(&t), int x1, int x2, Coords... C)
{
    string ret = "[";
    x1 = min(x1, SIZE(t));
    auto e = begin(t);
    advance(e, x1);
    for (int i = x1, _i = min(x2, SIZE(t) - 1); i <= _i; ++i)
    {
        ret += to_string(*e, C...) + (i != _i ? ", " : "");
        e = next(e);
    }
    return ret + "]";
}
template <int Index, typename... Ts>
struct print_tuple
{
    string operator()(const tuple<Ts...> &t)
    {
        string ret = print_tuple<Index - 1, Ts...>{}(t);
        ret += (Index ? ", " : "");
        return ret + to_string(get<Index>(t));
    }
};
template <typename... Ts>
struct print_tuple<0, Ts...>
{
    string operator()(const tuple<Ts...> &t)
    {
        return to_string(get<0>(t));
    }
};
template <typename... Ts>
string to_string(const tuple<Ts...> &t)
{
    const auto Size = tuple_size<tuple<Ts...>>::value;
    return print_tuple<Size - 1, Ts...>{}(t);
}
void dbgr() { ; }
template <typename Heads, typename... Tails>
void dbgr(Heads H, Tails... T)
{
    cerr << to_string(H) << " | ";
    dbgr(T...);
}
void dbgs() { ; }
template <typename Heads, typename... Tails>
void dbgs(Heads H, Tails... T)
{
    cerr << H << " ";
    dbgs(T...);
}
// #undef LOCAL
#ifdef LOCAL
#define dbgv(...) cerr << to_string(__VA_ARGS__) << endl;
#define dbga(...)                         \
    cerr << "[" << #__VA_ARGS__ << "]: "; \
    dbgv(__VA_ARGS__);
#define dbgr(...)      \
    dbgr(__VA_ARGS__); \
    cerr << endl;
#define dbg(...)                          \
    cerr << "[" << #__VA_ARGS__ << "]: "; \
    dbgr(__VA_ARGS__);
#else
#define dbgv(...) 42
#define dbga(...) 42
#define dbgr(...) 42
#define dbg(...) 42
#endif

const ll MOD = 1e9 + 7;
const int MX = 1e6 + 100;

void _main_main()
{
    int n;
    cin >> n;
    int x, baki = n, opr = 0;
    set<int> s;
    VI v, pos;
    cout << "? 1" << nl;
    cout.flush();
    cin >> x;
    cout << "? 1" << nl;
    cout.flush();
    cin >> x;
    int cnt, d, in = 1, ans[n + 1];
    memset(ans, -1, sizeof(ans));
    if (x == 1)
    {
        in = 2;
        ans[1] = 1;
        s.insert(1);
        opr = 1;
    }
    else
    {
        v.push_back(x);
        s.insert(x);
    }
    while (baki > 0)
    {
        while (1)
        {
            cout << "? " << in << nl;
            cout.flush();
            cin >> x;
            if (s.find(x) != s.end())
                break;
            s.insert(x);
            v.pb(x);
        }
        cnt = v.size();
        pos = v;
        sort(ALL(pos));
        d = opr % cnt;
        for (int x : v)
            cout << x << " ";
        cout << nl;
        for (int x : pos)
            cout << x << " ";
        cout << nl;
        cout.flush();
        for (int i = 0; i < cnt; i++)
        {
            ans[pos[(i + d) % cnt]] = v[i];
        }
        opr += cnt + 1;
        baki -= cnt;
        while (in <= n && ans[in] != -1)
            in++;
    }
    cout << "! ";
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << nl;
    cout.flush();
    v.clear();
}

int main()
{
    //     ios::sync_with_stdio(0);
    //     cin.tie(0);
    //     cout.tie(0);

    int testCase = 1;
    cin >> testCase;
    for (int i = 0; i < testCase; i++)
    {
        _main_main();
    }
}