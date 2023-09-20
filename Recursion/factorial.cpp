#include<iostream>
using namespace std;
void print(int n)
{
    if(n==0)
        return;
    cout<<n<<" ";
    print(n-1);
    
}
int power(int n)
{
    if(n==0)
        return 1;
    return n*power(n-1);
}
int factorial(int x)
{
    //base case for stopping
    if(x==0)
        return 1;
    //recursive case for calculating
    return x*factorial(x-1);
}
int main()
{
    int n;
    cin>>n;

    int pow= power(n);
    int ans= factorial(n);
    cout<<pow<<endl;
    cout<<ans<<endl;
    print(n);
    return 0;
}