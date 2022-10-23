#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void print2DMatrix(vector<vector<char>> arr)
{
    char chekcer;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            chekcer = arr[i][j];
            cout << arr[i][j];
        }
        if (chekcer != '\n')
            cout << '\n';
    }
}
char getReserve(char c)
{
    if (c == '(')
    {
        return ')';
    }
    if (c == ')')
    {
        return '(';
    }
    if (c == '>')
    {
        return '<';
    }
    if (c == '<')
    {
        return '>';
    }
    if (c == '/')
    {
        return '\\';
    }
    if (c == '\\')
    {
        return '/';
    }
    return c;
}
int main()
{
    // IOS;
    //  DONT FORGOT TO REMOVE NEXT TOW LINES!!

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // map<string, vector<int>> dep;

    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        vector<vector<char>> arr =
            {
                // 0    1   2 // j ,, i
                {' ', 'o', ' '},  // 0
                {'/', '|', '\\'}, // 1
                {'/', ' ', '\\'}  // 2
            };                    // 2
        while (d--)
        {

            string command;
            getline(cin, command);
            //char *command = new char[1024];
            //cin >> command;
            //char q = *command;
            if (command[0] == 's')
            {
                command.erase(0,4);
                cout<<command<<'\n';
            }
            else
            {
                if (command == "left hand to head")
                {

                    arr[0][2] = ')';
                    arr[1][2] = ' ';
                    print2DMatrix(arr);
                }
                else if (command == "left hand to hip")
                {

                    arr[0][2] = ' ';
                    arr[1][2] = '>';
                    print2DMatrix(arr);
                }
                else if (command == "left hand to start")
                {

                    arr[0][2] = ' ';
                    arr[1][2] = '\\';
                    print2DMatrix(arr);
                }
                else if (command == "left leg in")
                {

                    arr[2][2] = '>';
                    print2DMatrix(arr);
                }
                else if (command == "left leg out")
                {
                    arr[2][2] = '\\';
                    print2DMatrix(arr);
                }
                else if (command == "right hand to head")
                {
                    arr[0][0] = '(';
                    arr[1][0] = ' ';
                    print2DMatrix(arr);
                }
                else if (command == "right hand to hip")
                {
                    arr[0][0] = ' ';
                    arr[1][0] = '<';
                    print2DMatrix(arr);
                }
                else if (command == "right hand to start")
                {
                    arr[0][0] = ' ';
                    arr[1][0] = '/';
                    print2DMatrix(arr);
                }
                else if (command == "right leg in")
                {
                    arr[2][0] = '<';
                    print2DMatrix(arr);
                }
                else if (command == "right leg out")
                {
                    arr[2][0] = '/';
                    print2DMatrix(arr);
                }
                else if (command == "turn")
                {
                    char temp = getReserve(arr[0][0]);
                    arr[0][0] = getReserve(arr[0][2]);
                    arr[0][2] = temp;

                    temp = getReserve(arr[1][0]);
                    arr[1][0] = getReserve(arr[1][2]);
                    arr[1][2] = temp;

                    temp = getReserve(arr[2][0]);
                    arr[2][0] = getReserve(arr[2][2]);
                    arr[2][2] = temp;

                    print2DMatrix(arr);
                }
            }
        }
        vector<vector<char>> final =
            {
                // 0    1   2 // j ,, i
                {' ', 'o', ' '},   // 0
                {'/', '|', '\\'},  // 1
                {'/', ' ', '\\'}}; // 2
        print2DMatrix(final);
    }
}
