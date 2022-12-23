#include <iostream>
using namespace std;

main(){

	int initialvelocity;
	int acceleration;
	int time;
	int finalvelocity;

	cout<<endl;

	cout<<"Enter Initial Velocity:  ";
	cin>>initialvelocity;
	cout<<endl;

	cout<<"Enter Acceleration:  ";
	cin>>acceleration;
	cout<<endl;

	cout<<"Enter Time:  ";
	cin>>time;
	cout<<endl;

	finalvelocity=(acceleration*time)+initialvelocity;

	cout<<"Final Velocity: "<<finalvelocity;
		cout<<endl;


}