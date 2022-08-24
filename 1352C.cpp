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

    int t;
    cin>>t;
    while(t--){
        ll n,k,temp;
        cin>>n>>k;
        temp=k/(n-1);
        k-=(n-1)*temp;
        n*=temp;
        if (k==0) cout<<n-1<<endl;
        else cout<<n+k<<endl;
    }
}