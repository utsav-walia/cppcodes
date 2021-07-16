#include<iostream>
#include<cstdio>
using namespace std;

int main() 
{
	int n,i,j;
	cin>>n;

	for(i=1;i<=n;i++)
	{
		
		for(j=n;j>i;j--) 
			cout<<" ";
		
		if(i==1||i==n)

			for(j=1;j<=n;j++)
				cout<<"*";
		
			
		else
			
			for(j=1;j<=n;j++)
				
				if(j==1||j==n)
				cout<<"*";

				else
				cout<<" ";
				
		
		cout<<'\n';
	}

	return 0;
}