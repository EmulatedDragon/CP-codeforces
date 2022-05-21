#include <iostream>
using namespace std;

int main()
{
    int n, p1, p2;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
    cin >> p1;
    for (int i = 0; i < p1; i++)
    {
        int x;
        cin >> x;
        arr[x - 1] = 1;
    }
    cin >> p2;
    for (int i = 0; i < p1; i++)
    {
        int x;
        cin >> x;
        arr[x - 1] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
}