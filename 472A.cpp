#include <bits\stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define loop(i, a, b) for (int i = a; i <= b; i++)

int iscomposite(int x,int n){
    if (x%2==0 || x%3==0 || x%5==0){
        return 1;
    }
    else{
        loop(i,5,n/2){
            if (x%i==0) return 1;
        }
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    for(int i=4;i<n/2;i+=2){
        if (iscomposite(n-i,n)==1){
            cout<<i<<" "<<n-i;
            return 0;
        }
    }
}