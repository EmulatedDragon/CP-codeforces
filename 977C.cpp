#include <bits\stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define loop(i, a, b) for (int i = a; i <= b; i++)
int n,k;

int solve(int arr[]){
    int sum=0;
    if(k==0){
        if(arr[n-1]==1) return -1;
        else return 1;
    }
    for(int i=0;i<n;i++){
        int temp=1;
        for(int j=i+1;j<n;j++){
            if (arr[j]==arr[i]){
                temp++;
                i++;
                }
            else break;
        }   
        sum+=temp;
        if (sum==k) return arr[i];
        if (sum>k) return -1;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    cout<<solve(arr);
}