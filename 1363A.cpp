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
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            arr[i]=p%2; 
        }
        int ev=0,od;
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if (arr[i]==1) break;
            else ev++;
        }
        od=n-ev;
        if (od==0) {
        cout<<"No"<<endl;
        continue;
        }
        od--;
        x--;
        if (x>0 && x>=od && od>1) x-=od-od%2;
        else if(x>0 && x<od) x-=(x-x%2);
        if (x==0) cout<<"Yes"<<endl;
        else if(x>0 && x<=ev) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}