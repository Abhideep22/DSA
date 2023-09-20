#include<iostream>
using namespace std;
void move_zero(int arr[], int size){
    int nonzero=0;
    for(int i=0; i<size;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[nonzero]);
            nonzero++;
        }
    }
}
int main()
{
    int arr[5]={0,1,0,3,12};
    cout<<"Before moving the zeros"<<endl;
    for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";
    }

    move_zero(arr,5);
    cout<<"After moving zeros to one end"<<endl;
    for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}