/*
 ==============================================================================================================================
 Name        : qs3.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright (c) Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Modify your password program from before to put all of the password checking logic into a
               separate function, apart from the rest of the program.
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

bool password_check (int username, string password)
{
if ((username == 1 && password == "rose") || \
	(username == 2 && password == "jasmine") || \
	(username == 3 && password =="lotus"))
			{
				return true;
			}
			else return false;
}

int main()
{
int i =0;
int username1;
string password1;
bool result;

while (i<3)
	{
		cout<<"Enter your username: "<<endl;
		cin >> username1;
		cout<<"Enter your Password: "<<endl;
		cin >> password1;
		result = password_check(username1, password1);
		if(result)
		{
			cout << "welcome!! \n"; break;
		}
		else
		{
			i++; 
			if(i<3)
			cout << "try again \n";
		}

	}
			if(i==3)
			cout<< "Sorry...you have exceeded your trials"<<endl;
system("pause");
	return 0;	
}

