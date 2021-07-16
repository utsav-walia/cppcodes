#include<iostream>
using namespace std;

int main() {

	int n,digit=0,rev=0;
 
	cin>>n;
	
	for(int i=0;i<=n;i++)
	{
	
	digit = n%10;
	rev = (rev*10) + digit;
	n = n/10;
	}

	cout<<rev;

	return 0;
}