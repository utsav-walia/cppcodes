#include<iostream>
using namespace std;
int main() 
{

int c;
int a,b,s;

cin>>a;
cin>>b;
cin>>s;


	while (a<=b)
	{
		c = ((a-32)*5)/9;
		cout << a << '\t' << c << '\n';
		a = a + s;
	}
 
	return 0;
}