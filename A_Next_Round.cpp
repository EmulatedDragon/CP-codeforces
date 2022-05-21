#include<iostream>
using namespace std;

int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = k; i < n; i++)
    {
        if (arr[i]==arr[k-1])
        {
            count++;
        }
        else
            break;
    }
    if (arr[k-1]==0)
    {
        int count=0;
        for (int i = 0; i < k; i++)
        {
            if (arr[i]!=0)
            {
                count++;
            }
        }
        cout<<count;
    }
        
    else
        cout<<k+count<<endl;
}