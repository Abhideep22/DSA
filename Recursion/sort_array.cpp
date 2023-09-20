#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int size) 
{
    //Base case
    if(size==0 || size==1)
    {
        return true;
    }

    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        bool remainingPart=isSorted(arr+1,size-1);
        return remainingPart;
    }
}
int main()
{
    int arr[5]={3,4,9,2,1};
    int size = 5;
    int ans = isSorted(arr, size);

    if(ans)
    {
        cout<<"Sorted";
    }
    else
    {
        cout<<"Not Sorted";
    }
    return 0;
}
