#include<bits/stdc++.h>
using namespace std;            

void insertionSort(){                                       
        for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                //shift krdo
                arr[j+1]=arr[j];
            }
            else{//ruk jaao
                break;
            }
        }
        arr[j+1]=temp;//aagr element biich mai ayega tho
    }
}
int main(){
    return 0;
}

void insertionSort(){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && ar[j-1]>ar[j]){
            swap(ar[j-1],ar[j]);
            j--;
        }
    }
}