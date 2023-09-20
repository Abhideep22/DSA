#include<bits/stdc++.h>
using namespace std;
int getMin(int arr[], int size)
{
    int mini = INT_MAX;

    for(int i=0; i<size; i++)
    {
        if(arr[i]<mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}
int getMax(int arr[], int size)
{
    int maxi = INT_MIN;

    for(int i=0; i<size; i++)
    {
        if(arr[i]>maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int main()
{
    int size;
    cin >> size;

    int arr[100];
    for(int i=0; i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Maximum value from the array is:"<<getMax(arr, size)<<endl;
    cout<<"Minimum value from the array is:"<<getMin(arr, size)<<endl;
    return 0;
}