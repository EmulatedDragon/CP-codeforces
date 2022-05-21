#include <iostream>
using namespace std;

int main()
{
    int n,count=1;
    cin>>n;
    string temp;
    cin>>temp;
    for (int i = 0; i < n-1; i++)
    {
        string s;
        cin>>s;
        if (s!=temp)
        {            
            count++;
            temp=s;
        } 
    }
    cout<<count;
}