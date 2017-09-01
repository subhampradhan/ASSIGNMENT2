#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x,y,z,p,t,r;
	cin>>p>>t>>r;
	x=1+(0.01*r);
	y=p*pow(x,t);
	z=y-p;
	cout<<"principle amount="<<p<<" rate="<<r<<" time="<<t<<" compound interest="<<z<<endl;
	return 0;
}
