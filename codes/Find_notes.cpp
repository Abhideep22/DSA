#include<iostream>
using namespace std;
int main()
{
	int amount;
	int n10,n20,n50,n100;
	n10 = n20 = n50 = n100  =0;
	cout<<"Please Enter Your total Amount to find the notes : ";
	cin>>amount;
	
	switch(amount >=100)
	{
		case 1:
			n100 = amount/100;
        	amount -= n100 * 100;
        break;
	}
	switch(amount >=50)
	{
		case 1:
			n50 = amount/50;
        	amount -= n50 * 50;
	}
	switch(amount >=20)
	{
		case 1:
			n20 = amount/20;
        	amount -= n20 * 20;
        break;
	}
	switch(amount >=10)
	{
		case 1:
			n10 = amount/10;
        	amount -= n10 * 10;
        break;
	}
    cout << "100 = " << n100 <<endl;
    cout << "50 = " << n50 <<endl;
    cout << "20 = " << n20 <<endl;
    cout << "10 = " << n10 <<endl;
}