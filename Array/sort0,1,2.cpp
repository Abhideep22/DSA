#include<bits/stdc++.h>
using namespace std;
int sortArray(int arr[], int size){
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    for(int i=0; i<size;i++){
        if(arr[i]==0){
            cnt0++;
        }
        else if(arr[i]==1){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
    //replacing the index with values 0
    for(int i=0; i<cnt0;i++){
        arr[i]=0;
    }
    for(int i=cnt0; i<cnt1;i++){
        arr[i]=1;
    }
    for(int i=cnt1; i<cnt2;i++){
        arr[i]=2;
    }
    return arr;
}
int main(){
    return 0;
    
}