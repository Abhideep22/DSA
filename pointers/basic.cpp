#include<iostream>
using namespace std;
int main()
{
    /*
    int arr[10]={23,122,41,67};

    cout<<"Address of first block is:"<<arr<<endl;
    cout<<"Address of first block is:"<<&arr[0]<<endl;

    cout<<"4th--->"<<*arr<<endl;
    cout<<"5th--->"<<*arr+1<<endl;
    cout<<"4th--->"<<*(arr+1)<<endl;

    int i=3;
    cout<<"6th--->"<<i[arr]<<endl;
    

   int temp[10];
   int *ptr=&temp[0];

   cout<<"Size of temp:"<<sizeof(temp)<<endl;
   cout<<"Size of temp:"<<sizeof(ptr)<<endl;
   cout<<"Size of temp:"<<sizeof(*ptr)<<endl;
   cout<<"Size of temp:"<<sizeof(&ptr)<<endl;
   */
  int arr[10];
  //ERROR
    //arr=arr+1;

    int *pt=&arr[0];
    cout<<"Before add.-->"<<pt<<endl;
    pt=pt+1;
    cout<<"After add.-->"<<pt<<endl;
}