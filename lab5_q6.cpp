// first include the library
#include<iostream>
using namespace std;
int main()
	{
//declaring the variables
	int num;
//ask the user to enter the number
	cout<< " enter the year "<<endl;
	cin>>num;
	if(num%4==0)
	{
	cout<< " it is a leap year "<<endl;
	}
	else
	{
	cout<< " it is not a leap year "<<endl;
	}
	return 0;
	}
