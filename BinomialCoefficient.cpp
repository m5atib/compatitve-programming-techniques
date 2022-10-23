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

ll add(ll a, ll b) { return ((a % MOD) + (b % MOD)) % MOD; }
ll mul(ll a, ll b) { return ((a % MOD) * (b % MOD)) % MOD; }
ll sub(ll a, ll b) { return ((a % MOD) - (b % MOD) + MOD) % MOD; }

int main()
{
    IOS;
    // DONT FORGOT TO REMOVE NEXT TOW LINES!!
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t, n, k;
    cin >> t;
    //Time Complexity: O(n*k) 
    vector<vector<ull>> C(4003);
    for (int i = 0; i <= 4000; i++)
    {
        C[i] = vector<ull>(i+1);
        for (int j = 0; j <= i; j++)
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = (C[i-1][j-1]+C[i-1][j]);
    }

    while (t--)
    {
        cin>>n;
        //cout <<C[2*n][n]/(n+1)<<"\n";
        //cout<<C[2*n][n]/(n+1)<<"\n";
    }

    

    return 0;
}
