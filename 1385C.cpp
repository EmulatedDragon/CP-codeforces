#include <bits\stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define loop(i, a, b) for (int i = a; i <= b; i++)
int n;

int solve(int arr[]){
    int temp=0,count;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>arr[i-1]){
            temp=i;
            break;
        }
    }
    for(int i=temp;i>0;i--){
        if(arr[i]<arr[i-1]){
            return i;
        }
    }
    return 0;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) cin>>arr[i];
        cout<<solve(arr)<<endl;
    }
}