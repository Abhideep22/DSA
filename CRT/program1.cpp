#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr= new int[n];
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]
    }
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Total even number is:"<<even<<endl;
    cout<<"Total odd number is:"<<odd<<endl;
    
    return 0;

}