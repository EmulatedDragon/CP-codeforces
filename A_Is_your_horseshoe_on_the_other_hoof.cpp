#include <iostream>
using namespace std;

int main()
{
    string s1, s2, s3, s4;
    int count = 0;
    cin >> s1 >> s2 >> s3 >> s4;
    if (s1 == s2)
        count++;
    if (s1 == s3)
        count++;
    if (s1 == s4)
        count++;
    if (s2 == s3)
        count++;
    if (s2 == s4)
        count++;
    if (s3 == s4)
        count++;
    if (count == 3 || count == 2)
        cout << 2;
    else if (count == 6)
        cout << 3;
    else if (count == 1)
        cout << 1;
    else
        cout << 0;
}