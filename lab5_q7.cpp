//first include the library
#include<iostream>
using namespace std;
int main()
	{
//declaring the variables
 	char a;
//ask the user to enter a character
	cout<< " please give a character "<<endl;
	cin>>a;
	if(a>64 and a<91)
	{
	cout<< " your character is a alphabet and is in upper case "<<endl;
	}
	else
	{
	cout<< " your is not a alphabet and is not in upper case "<<endl;
	}
	if(a>96 and a<123)
	{
	cout<< " your character is a alphabet and is in lower case "<<endl;
	}
	else
	{
	cout<< " your character is not a alphabet and is not in lower case "<<endl;
	} 
	return 0;
	}
