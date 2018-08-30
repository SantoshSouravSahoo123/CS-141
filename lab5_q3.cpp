// first include the library 
#include<iostream>
using namespace std;
int main()
	{
//declaring the variables
	int num;
//ask the user to put the number
	cout<< " give me the number and i will tell you its nature "<<endl;
	cout<< " enter your number "<<endl;
	cin>>num;
	if(num>0)
	{
	cout<< " number is positive "<<endl;
	}

	else if(num==0)
	{
	cout<< " number is zero "<<endl;
	}
	else
	{
	cout<< " number is negative "<<endl;
	}
	return 0;
	}
