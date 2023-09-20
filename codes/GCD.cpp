#include<iostream>
using namespace std;
int gcd(int x, int y)
{
    if(y==0)
        return x;
    if(x==0)
        return y;
    while(x!=y)
    {
        if(x>y)
        {
            x=x-y;
        }
        else
        {
            y=y-x;
        }
    }
    return x;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<"GCD of "<<a<<"& GCD of "<<b<<"is"<<ans<<endl;
    return 0;
}
if(gcd()==0)
{
    re
}