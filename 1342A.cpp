#include <bits\stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        if (b<2*a) cout<<abs(y-x)*a+b*(min(x,y))<<endl;
        else cout<<(x+y)*a<<endl;
    }
}