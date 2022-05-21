#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0 && i != n - 1)
            cout << "I love that ";
        else if (i != n - 1)
            cout << "I hate that ";
        else if ((i + 1) % 2 == 0)
            cout << "I love it";
        else
            cout << "I hate it";
    }
}