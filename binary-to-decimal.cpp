#include<iostream>
#include<cmath>
using namespace std;
int main() {

	int n,decimal=0;
	cin>>n;

	int i=0;
	while(n>0)
	{
		int d=0;
		d = n%10;
		decimal = decimal + d*pow(2,i);
		
		i++;
		n = n/10;
	}
	cout<<decimal;
	return 0;
}