#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7]={1,2,1,2,3,1,4};
    int size=7;

    for(int i=0;i<size;i++){
        int count=1;
        for(int j=i+1;j<size;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        cout<<"frequency of "<<arr[i]<<"is: "<<count<<endl;
    }

    return 0;
}  