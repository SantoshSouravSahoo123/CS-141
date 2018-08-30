// first include the library
#include<iostream>
using namespace std;
int main()
	{
//declaring the variables
	int num;
//ask the user to give the number
	cout<< " enter a digit and i will tell u whether it is divisible by 5 and 11 or not "<<endl;
	cin>>num;
	if(num%5==0 and num%11==0)
	{
		cout<< " number is divisible by 5 and 11 "<<endl;
	}
	else
	{
		cout<< " number is not divisible by 5 and 11 "<<endl;
	}
	return 0;
	}
