#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i = 1; i<=n; i++)
    {
        fact=  fact*n;
    }
    return fact;
}
int nCr( int n,  int r)
{
    int num = factorial(n);
    int demo = factorial(n)*factorial(n-r);

    int ans = (num/ demo);

    return ans;
}
int main()
{
    int n, r;
    cout<<"Enter the value of n & r:"<<endl;
    cin >> n >> r;

    cout<<"Answer is::"<<nCr(n, r)<<endl;
    
    return 0;
}