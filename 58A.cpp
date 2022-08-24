#include <bits\stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define loop(i, a, b) for (int i = a; i <= b; i++)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s,l="hello";
    cin>>s;
    int j=0;
    for(int i=0;i<s.length();i++){
        if (s[i]==l[j]) j++;
        if (j==5){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}