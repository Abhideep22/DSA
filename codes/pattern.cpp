#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    // int i=1;
    // while (i<=n)
    // {
    //     int j=1;
    //     while (j<=n)
    //     {
    //         cout<<j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;      
    // }

    // -------------->>>>>>>>>>>>
    // int count=1;
    // for(int i=1;i<=n; i++)
    // {
    //     for(int j=1; j<=i; j++)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }
    // ----------------->>>>>>>>>>>>>>

    for(int row=1; row<=n; row++)
    {
        //int value = row;    and formula is (i+j-1)
        char ch = 'A'+row-1;    //and formula for 1 -> A ('A'+i+j-2)
        for(int col=1; col<=n; col++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }

    return 0;
    
}