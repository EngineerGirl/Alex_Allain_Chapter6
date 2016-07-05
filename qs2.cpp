/*
 ==============================================================================================================================
 Name        : qs6.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright (c) Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Make your calculator program perform computations in a separate function for each type of
computation.
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int add(int n, int m)
{
	return n+m;
}
int sub(int n, int m)
{
	return n-m;
}
int mul(int n, int m)
{
	return n*m;
}
int divi(int n, int m)
{
	return (n/m);
}
int mod (int n, int m)
{
	return n%m;

}
void calculator(int n1, int n2, char c)
{
	if (c=='+')
		cout << add(n1, n2) <<endl;
	if (c=='-')
		cout << sub(n1, n2)<<endl;
	if (c=='*')
		cout << mul(n1, n2)<<endl;
	if (c=='/')
		cout << divi(n1, n2)<<endl;
	if (c=='%')
		cout << mod (n1, n2)<<endl;
}
int main()
{
	int arg1,arg2;
	char operation;
	
	while(1)
	{
	cout<<"Enter your two numbers that you want to calculate:"<<endl;
	cin>>arg1;
	cin>>arg2;
	cout<<"Enter the arithmetic operation you want to carry out: "<<endl;
	cin>> operation;
	calculator(arg1,arg2,operation);
	}

system("pause");
	return 0;	
}
