#include<bits/stdc++.h>
using namespace std;
int isPresent(int arr[][4], int target, int row, int col){
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            if(arr[row][col]==target){ //the kiran minds,acespider,infotech,vibrant minds


                return true;
            }
        }
    }
    return false;
}
void toPrintSum(int arr[][4],int row, int col){
    for(int row=0; row<3; row++)
    {
        int sum=0;
        for(int col=0; col<4; col++)
        {
            sum+=arr[row][col];
        }
        cout<<sum<<" "<<endl;
    }
    cout<<endl;
}
void rowMax(int arr[][4],int row, int col){
    int maxi=INT_MIN;
    int rowIndex=-1;
    for(int row=0; row<3; row++)
    {
        int sum=0;
        for(int col=0; col<4; col++)
        {
            sum+=arr[row][col];
        }
        if(sum>maxi){
            rowIndex=row;
            maxi=sum;
        }
    }
    cout<<"Maximun of row sumation is "<<maxi<<endl;
    cout<<"Row index is "<<rowIndex;
}
int main()
{
    //2D-array

    int arr[3][4];
    /*int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};*/

    //taking input->>row-wise
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            cin>>arr[row][col];
        }
    }
    //taking input->col-wise
    // for(int col=0;col<4;col++){
    //     for(int row=0;row<3;row++){
    //         cin>>arr[row][col];
    //     }
    // }

    //output
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the element"<<endl;
    int target;
    cin>>target;
    if(isPresent(arr, target, 3, 4)){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    toPrintSum(arr,3,4);
    rowMax(arr,3,4);
    return 0;
}