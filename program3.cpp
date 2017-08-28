#include <iostream>
using namespace std;

int main() {
	float a,b;
	cin>>a;
	cout<<"temp in fahrenheit="<<a<<endl;
	b=(a-32)*((double)5/9);
	cout<<"temp in celsius="<<b<<endl;
	return 0;
}
