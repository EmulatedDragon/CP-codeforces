#include <bits\stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define loop(i, a, b) for (int i = a; i <= b; i++)

int mod(int x){
    if (x<0) return x*-1;
    else return x;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c;
    cin>>a>>b>>c;
    int d[3]={a,b,c};
    sort(d,d+3);
    cout<<mod(d[1]-d[0])+mod(d[1]-d[2]);
}
