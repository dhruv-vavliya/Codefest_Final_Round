#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    cin.tie(0), cin.sync_with_stdio(0);

    string n;
    cin >> n;

    for (int i = 0; i < n.size() / 2; i++)
    {
        if (n[i] != n[n.size() - i - 1])
        {
            cout << "string is Not palindrom";
            exit(0);
        }
    }

    cout << "string is Palindrom";
}