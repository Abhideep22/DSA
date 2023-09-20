#include<bits/stdc++.h>
using namespace std;
bool LinearSearch(int arr[], int size, int k)
{
    //base case for linear search
    if(size == 0)
        return false;
    if(arr[0] == k)
        return true;
    else{
        bool remaingPart=LinearSearch(arr-1, size-1, k);
        return remaingPart;
    }
}
int main()
{
    int arr[5]={1,2,3,4,5,};
    int key=3;
    int size=5;

    int ans=LinearSearch(arr,size,key);
    if(ans){
        cout<<"Element found at index "<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}