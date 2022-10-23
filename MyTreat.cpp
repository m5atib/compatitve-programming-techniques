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
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        map<string, ll> memo;
        for (int j = 0; j < m; j++)
        {
            string name;
            cin >> name;
            int n;
            cin >> n;

            if (memo.find(name) != memo.end())
            {
                memo[name] +=n;
            }else{
                memo[name] += n;
            }

            
            
            vector<string> frs(n);
            for (int i = 0; i < n; i++)
            {
                cin >> frs[i];

                memo[frs[i]] -= 1;
            }
            

        }
        cout << endl;
            for (auto f : memo)
            {
                cout << f.first << " -> " << f.second << " ";
              
            }
            cout << '\n';
    }
}
