// C++ program to find minimum time to finish aulli jobs with
// given number of assignees
#include <bits/stdc++.h>
using namespace std;
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long long ulli;

ulli fastExp(ulli b, ulli e, ulli m)
{
    ulli result = e & 1 ? b : 1;
    while (e)
    {
        e >>= 1;
        b = ((b % m) * b % m) % m;
        if (e & 1)
            result = ((result % m) * (b % m)) % m;
    }
    return result;
}
bool is_possible(vector<ulli> &arr, ulli i, ulli n, ulli mid, vector<ulli> &worker, ulli k)
{
  
    if (i == n)
        return true;

    for (ulli j = 0; j < k; j++)
    {
        if (worker[j] + arr[i] <= mid)
        {
            worker[j] += arr[i];

            if (is_possible(arr, i + 1, n, mid, worker, k))
                return true;

            worker[j] -= arr[i];
        }

        if (worker[j] == 0)
            break;
    }

    return false;
}

ulli minimumTimeRequired(vector<ulli> &arr, ulli k)
{

    ulli n = arr.size();

    sort(arr.begin(), arr.end(), greater<ulli>());

    ulli mini = INT_MAX;


    ulli low = *max_element(arr.begin(), arr.end());

    ulli high = 0;

    for (ulli i = 0; i < n; i++)
    {
        high += arr[i];
    }

    ulli ans = -1;


    while (low <= high)
    {
        ulli mid = low + (high - low) / 2;

        vector<ulli> worker(k, 0);

        if (is_possible(arr, 0, n, mid, worker, k))
        {
            ans = mid;

            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    
    mini = min(mini, fastExp(2,ans,1000000007));

    return mini;
}

// Driver program
int main()
{
    IOS;
    // DONT FORGOT TO REMOVE NEXT TOW LINES!!

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ulli n;
    cin >> n;
    ulli m;
    cin >> m;
    vector<ulli> jobs(n);

    for (ulli j = 0; j < n; j++)
        cin >> jobs[j];

    ulli iii = minimumTimeRequired(jobs, m)% 1000000007;

    cout <<iii;

    return 0;
}
