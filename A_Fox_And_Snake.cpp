#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n/2; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"#";
        }
        cout<<endl;
        if(i%2!=0)
            cout<<"#";
        for (int j = 0; j < m-1; j++)
        {
            cout<<".";
        }
        if(i%2==0)
            cout<<"#";  
        cout<<endl;
    }
    for (int j = 0; j < m; j++)
        {
            cout<<"#";
        }
}