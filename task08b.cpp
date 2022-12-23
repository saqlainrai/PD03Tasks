#include <iostream>
using namespace std;

main(){

	system("cls");
	int num;
	int r1;
	int r2;
	int r3;
	int out1;
	int out2;
	int out3;
	int out4;
	int out5;

	
	cout<<"Enter 4-digit Number: ";
	cin>>num;
	cout<<endl;

	out1=num%10;
	r1=num/10;
	out2=r1%10;
	r2=num/100;
	out3=r2%10;
	r3=num/1000;
	out4=r3%10;

	out5=out1+out2+out3+out4;

	cout<<endl;	
	cout<<"  Sum: "<<out5<<endl;
	cout<<endl;


}