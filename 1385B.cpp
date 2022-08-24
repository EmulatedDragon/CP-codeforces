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
        int n;
        cin>>n;
        vector<int> v;
        loop(i,0,2*n-1){
            int t;
            cin>>t;
            if(find(v.begin(),v.end(),t)==v.end()){
                v.push_back(t);
            }
        }
        for(auto x: v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}