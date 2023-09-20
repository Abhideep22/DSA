#include<iostream>
using namespace std;
void print(int *p)
{
    cout<<"value at this pointer is-->"<<*p<<endl;
    cout<<"Address of this pointer is-->"<<&p<<endl;
}
int main()
{
    int value=9;
    int *v=&value;

    print(v);
    return 0;
}
