#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // CODE FOR DECIMAL---->>BINARY
    int ans=0;
    int i=0;
    
    // while(n!=0)
    // {
    //     int bit= n&1;
    //     ans=(bit* pow (10,i))+ans;
    //     n=n>>1;
    //     i++;
    // }
    // cout<<ans;

    //CODE FOR BINARY --------> DECIMAL

    while(n!=0)
    {
        int digit=n%10;
        if(digit==1)
        {
            ans=ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<ans;

    return 0;

}