#include<iostream>
using namespace std;
main()
{
	int number,product;
	cout<<"Enter a number : ";
	cin>>number;
	cout<<"Table of "<<number<<" is :";
	for(int  i=1 ; i<=10 ; i++)
	{
		product=number*i;
		cout<<endl<<number<<" * "<<i<<" = "<<product;
	}
}