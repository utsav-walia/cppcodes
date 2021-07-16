#include<iostream>
using namespace std;

int main() 
{
	int a,b,l=1;
	int x[11];

	cin>>a;
	cin>>b;
	for(int i=0;i<=10;i++)
	{
		while(a/x[i]==1 && b/x[i]==1)
		{
			if(a%x[i]==0 && b%x[i]==0)
			l = l * x[i];
		}
	}

	cout<<l;

	return 0;
}