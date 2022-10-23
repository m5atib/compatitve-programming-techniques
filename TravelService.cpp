#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


typedef pair<int, int> ii;

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
        int n;
        cin >> n;
        int fullTankCap;
        cin >> fullTankCap;
        int costOrgin;
        cin >> costOrgin;


        ll sum = fullTankCap * costOrgin;



        vector<ii> window(n);
        for (int i = 0; i < n; i++)
        {
            //window[i].second = i + 1;
            cin >> window[i].first >> window[i].second;
        }
        //sort(window.rbegin(), window.rend());

        vector<int> ans;
        priority_queue<ii, vector<ii>, greater<ii>> pq;
        ll temp  = fullTankCap;
        int idx = -1;
        for (int i = 0; i <n-1; i++)
        {
            if (fullTankCap-window[i].first > 0  ){
                i++;
                  
            }else {
                //break;
            }
            
        }

        if (ans.size() == 0)
        {
            cout << "impossible\n";
        }
        else
        {
            for (const int &p : ans)
            {
                cout << p << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}
