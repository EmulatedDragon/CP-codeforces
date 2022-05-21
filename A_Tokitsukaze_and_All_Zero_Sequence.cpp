#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n,flag=0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }    
        for (int i = 0; i < n; i++)
        {
            if (arr[i]==0)
            {
                flag+=2;
            }
            else if(i!=n-1)
            {
                if(arr[i]==arr[i+1])
                    flag++;
            }
        }
        if (n+1-flag>0)
            cout<<n+1-flag<<endl;
        else
            cout<<0<<endl;
    }
}