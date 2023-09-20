
//Time Complexity-->O(n)
//Space Complexity-->O(1)

#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){//loop ruuning for round

        bool swapped = false;
        
        for(int j=0;j<n-i;j++){//loop running for array
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
            //else ignore
        }
        if(swapped==false){
            //already sorted
            break;
        }
    }
    
}
int main(){
    
    
    return 0;
}