#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    // int n;
    // int ar[n];
    // cout<<"Enter the size of array:"<<endl;
    // cin>>n;

    // cout<<"Enter the elements in array:"<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cin>>ar[i];
    // }
    

int arr[10];

std::fill(arr, arr + 10, 5);
for(int i=0;i<10;i++)
{
    cout<<arr[i]<<endl;
}
    return 0;
}