#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int t = 0; t < n; t++)
    {
        string s;
        cin >> s;
        cout << s[0];
        for (int i = 1; i < s.size(); i += 2)
        {
            cout << s[i];
        }
        cout << endl;
    }
}