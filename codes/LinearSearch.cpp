#include<bits/stdc++.h>
using namespace std;
bool search(int arr[], int size, int key)
{
    for(int i = 0; i<size; i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }   
    }
    return 0;
}
int main()
{
    int arr[7] = {10, 30, 7, -4, 8, 2, 9};
    cout<<"Enter the element to be searched:"<<endl;
    int key;
    cin >> key;

    bool found = search(arr, 7 ,key);

    if(found)
    {
        cout<<"The element is found"<<endl;
    }
    else
    cout<<"Element is not found in the array";
    return 0;
}