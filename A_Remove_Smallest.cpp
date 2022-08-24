#include <bits\stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define loop(i, a, b) for (int i = a; i <= b; i++)

void solution();

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin>>tt;
    while(tt--){
        solution();
    }
}

void solution(){
    int n;
    cin>>n;
    int arr[n];
    loop(i,0,n-1){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    loop(i,1,n-1){
        if(arr[i]-arr[i-1]>=2){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
}