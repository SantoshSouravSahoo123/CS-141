// first include the library
#include<iostream>
using namespace std;
int main()
	{
	cout<< " Give me three numbers and i will give the greatest  "<<endl;
// declaring the variables
	int a, b, c;
// ask the user to enter the numbers
	cout<< " enter the numbers "<<endl;
	cin>>a>>b>>c;
	if(a>b and a>c)
	{
	 	cout<< " greatest number is "<<a<<endl;
	}
	
	if(b>c and b>a)
	{
		cout<< " greatest number is "<<b<<endl;
	}

	if(c>a and c>b)
	{
		cout<< " greatest number is "<<c<<endl;
	}
	
	return 0;
	}
