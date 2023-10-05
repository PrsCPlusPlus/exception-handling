#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a , b , c;
	cout<<"ENTER THE VALUE OF a : ";
	cin>>a;
	cout<<"ENTER THE VALUE OF b : ";
	cin>>b;
	try{
		if(b != 0)
		{
			c = a/b;
			cout<<endl<<"Division : "<<c<<endl;
		}
		else
		{
			throw b;
		}
	}
	catch(int e)
	{
		cout<<"Division by "<<e<<" has occured"<<endl;
	}
	return 0;
}
