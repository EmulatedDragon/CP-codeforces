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

    int n,sum=0;
    cin>>n;
    int arr[n];
    loop(i,0,n-1){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if (n==1){
        cout<<0;
        return 0;
    }
    loop(i,0,n-2){
        sum+=arr[n-1]-arr[i];
    }
    cout<<sum;
}