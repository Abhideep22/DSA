#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value:"<<endl;
    cin >> n;
    //varibale length array using DMA
    int *arr=new int[n];

    //taking input in the array
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout<<sizeof(arr)<<endl;

    return 0;
}