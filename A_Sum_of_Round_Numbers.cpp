#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        string x;
        cin >> x;
        int count = 0, arr[x.size()];
        for (int i = 0; i < x.size(); i++)
        {
            arr[i] = 0;
            if (x[i] != '0')
            {
                count++;
            }
        }
        cout << count << endl;
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] != '0')
            {
                cout << x[i];
                for (int l = 0; l < x.size() - i - 1; l++)
                {
                    cout << 0;
                }
                cout << " ";
            }
        }
        cout << endl;
    }
}