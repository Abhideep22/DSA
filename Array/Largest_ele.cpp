#include<iostream>
using namespace std;
int largest(int arr, int size)
{
    int large=arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i]> large)
        {
            large=arr[i];
        }
    }
    return large;
}
int main()
{
    int n;
    int
    int arr[n];
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    largest(arr, n);
    return 0;
}