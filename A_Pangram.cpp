#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int arr[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int temp;
        if (int(s[i]) >= 97)
            temp = int(s[i]) - 97;
        else
            temp = int(s[i]) - 65;
        arr[temp]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}