#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cout<<"ENTER YOUR AGE : ";
	cin>>a;
	try{
		if(a >= 18)
		{
			cout<<"PASSED"<<endl;
		}
		else
		{
			throw a;
		}
	}
	catch(int e)
	{
		cout<<"ERROR"<<endl<<"YOU ARE "<<e<<" YEARS OLD"<<endl;
	}
	return 0;
}
