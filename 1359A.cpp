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
        int n,m,k;
        cin>>n>>m>>k;
        if (m<(n/k)) cout<<m<<endl;
        else{
            m-=n/k;
            cout<<n/k-m/(k-1)-bool(m%(k-1))<<endl;
        }
    }
}