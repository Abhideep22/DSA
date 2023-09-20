#include<bits/stdc++.h>
using namespace std;
void Reverse(int arr[], int size)
{
    int start=0;
    int end=size-1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    //int arr[6] = {4, 6, 8, 2, -9, 1};
    int brr[5] = {10,20,30,40,50};

    //Reverse(arr, 6);
    Reverse(brr, 5); 

    //printArray(arr, 6);
    printArray(brr, 5);

    return 0;

}