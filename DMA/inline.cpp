#include<bits/stdc++.h>
using namespace std;
//inline function
inline getMax(int& a, int& b){
    return (a>b) ? a : b;
}
void print(int arr[],int n,int start=0){    //default argument
    for(int i=start;i<n;i++){
        cout << arr[i] <<endl;
    }
}
int main(){
    int a=1,b=3;

    int ans=getMax(a,b);
    cout<<ans<<endl;

    a+=2;
    b+=2;

    ans=getMax(a,b);
    cout<<ans<<endl;

    int arr[5]={1,2,3,4,5};
    int size=5;
    print(arr,size);
    return 0;
}