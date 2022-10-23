#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long int ull;

ull MOD = 1000000000;
#define print(item) cout << item << '\n'
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

ll add(ll a, ll b)
{
    return ((a % MOD) + (b % MOD)) % MOD;
}
ll mul(ll a, ll b) { return ((a % MOD) * (b % MOD)) % MOD; }
ll sub(ll a, ll b) { return ((a % MOD) - (b % MOD) + MOD) % MOD; }
ull MAXN = 10e5;
int n, t[4*MAXN];
int count(int a[] , int s , int e , int k) {
    
    if (s > e) 
        return 0;
    if (s == e) {
        return __gcd(e)
    }
    return count(a,s,int(s+e)/2) + count(a, int((s+e)/2)+1,e);
}
int main()
{
    IOS;
    // DONT FORGOT TO REMOVE NEXT TOW LINES!!
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    ull n, k, ai;

    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        vector<int> aa(n);
        for(int i = 0; i < n; i++) cin>>aa[i];
        cout << count(n,0,n-1,k) << endl;
    }
    return 0;
}
