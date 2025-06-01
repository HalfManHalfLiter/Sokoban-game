#include <iostream>

using namespace std;

int main(){

	cout<<5/5/5<<endl;	//0
	cout<<1-4*5+5<<endl;	//-14
	cout<<(!(1>1) && !(1<1));
	cout<<13%5%2<<endl;	//11

	int a=6,b=2;
	double x=10,y=1.1;
	cout<<(a/=b)<<endl; 	// a = 3
	cout<<a<<" "<<b<<endl;	//3 2
	cout<<(a==++b)<<endl;	//1
	cout<<a+b<<endl;	//6
	cout<<(y?x:2)<<endl;	//10
	cout<<y/x<<endl;	//0.11

	a=0x11;	//17
	x=0;
	for(a=0;a<5;a++){
		for(b=a;b<5;b++)	//20
			x+=b;	//x = x + b;

	}
	cout<<x<<endl;
	cout<<a+b<<endl;

	return 0;
}
