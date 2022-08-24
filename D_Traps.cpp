#include <iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int j = 0; j < t; j++)
    {
        int n,k;
        cin>>n>>k;
        unsigned long long int arr[n];
        long long int diff[n],temp[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            diff[i]=arr[i]-((n-(i+1)));
            temp[i]=diff[i];
        }
        sort(diff,diff+n,greater<int>());
        for (int i = 0; i < n; i++)
        {
            bool flag=0;
            for (int p = 0; p < k; p++)
            {
                if (diff[p]==temp[i])
                {
                    flag=1;
                    diff[p]=-100;
                    break;
                }
            }
            if (flag)
            {
                temp[i]=1;
            }
            else
            {
                temp[i]=0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (temp[i])
            {
                for (int p = i; p < n; p++)
                {
                    arr[p]++;
                }
            }
            else{
                sum+=arr[i];
            }
        }
        cout<<sum<<endl;
    }
}