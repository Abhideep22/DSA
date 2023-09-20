#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[], int size, int k, int s, int e){
    //base case for binary search
    //condition--1
    if(s>e) 
        return false;
    
    int mid=s+(e-s)/2;

    if(arr[mid] == k){
        return true;
    }
    //go to right wala part
    if(key > arr[mid]) {
        return binarySearch(arr, size, k, mid+1, e);
    }
    //left wala part
    else{
        return binarySearch(arr, size, k, mid-1);
    }
    
}
int main(){
    int arr[6] = {2,4,6,8,12,18};
    int size=6;
    int key=12;

    int ans=binarySearch(arr,size,key,0,5);

    cout<<"Element is present or not::"<<ans;
    return 0;
}
