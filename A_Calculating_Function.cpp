#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    cout<< ((n+1)/2)*((n%2==0)?1:-1);
}