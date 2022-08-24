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

    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        if ((n/2)%2==1){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(int i=2;i<=n;i+=2){
            cout<<i<<" ";
        }
        for(int i=1;i<n-1;i+=2){
            cout<<i<<" ";
        }
        cout<<n+n/2-1<<endl;
    }
}