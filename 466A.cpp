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

    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if (((n%m)*a)>b && a*m>b) cout<<(n/m+1)*b;
    else if(a*m>b && n>=m) {
        cout<<(n/m*b)+(n%m)*a;
    }
    else cout<<a*n;
}
