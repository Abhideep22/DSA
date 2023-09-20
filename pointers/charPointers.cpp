#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<"adders is-->"<<arr<<endl;
    char ch[5]="abcd";
    cout<<"adders is-->"<<ch<<endl;

    char *ptr=&ch[0];
    cout<<"adders is-->"<<ptr<<endl;    //add. print nhi kregaa
    return 0;
}