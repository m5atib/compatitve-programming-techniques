#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


int main()
{
    IOS;
    // DONT FORGOT TO REMOVE NEXT TOW LINES!!

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int targetSum, n;
    cin >> targetSum >> n;

    vector<int> coins(n);
    for (int i = 0; i < n; i++)
        cin >> coins[i];

    vector<vector<int>> memo[targetSum + 1];

    //cout<<memo[0]<<endl;

    // for (int i = 0; i <= targetSum; i++)
    // {
    //     if (memo[i] == 1)
    //     {
    //         for (int num : coins)
    //         {
    //             memo[i + num] = 1;
    //         }
    //     }
    // }

    // cout<<memo[targetSum]<<'\n';
}
