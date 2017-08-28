#include <iostream>
using namespace std;

int main() {
	float a,b,c,d,e,t,av,p;
	cin>>a>>b>>c>>d>>e;
	cout<<"marks of five subjects are "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
	cout<<"each subject carry 100 marks"<<endl;
	t=a+b+c+d+e;
	av=(a+b+c+d+e)/5;
	p=t*100/500;
	cout<<"total="<<t<<" average="<<av<<" percentage="<<p<<endl;
	return 0;
}
