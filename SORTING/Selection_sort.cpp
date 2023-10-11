//Time Complexity---->O(n^2)
//Space complexity---->O(1)

#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n){
    //for (n-1)rounds
    for(int i=0;i<n-1;i++){
        int min_index=i;    //assumed i'th index is minimun
        //checking for minimum index in (i+1) arrya
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        //swapping minimum value to i'th position
        swap(arr[min_index],arr[i]);
    }
}
int main(){
    int arr[]={4,2,14,5};
    int size=4;
    selectionSort(arr, size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}