#include<bits/stdc++.h>
using namespace std;
int sqrt(int n){
    int s=1;
    int e=n;
    //int mid=s+(e-s)/2;
    int ans=1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if((mid*mid)>=n){
            e=mid-1;
        }
        else{
            //ans=mid;
            s=mid+1;
        }
    }
    return e;
}
int main()
{
    int n;
    cout<<"Enetr the value:"<<endl;
    cin >> n;
    
    int ans=sqrt(n);

    cout<<"Square root of"<<n<<" is"<<ans<<endl;

    return 0;
}