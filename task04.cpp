#include <iostream>
using namespace std;

main(){

	system("cls");
	string name;
	int sub1;
	int sub2;
	int sub3;
	int sub4;
	int sub5;
	float totalobtainedmarks;
	float totobtmarkpercent;
 
	cout<<endl;

	cout<<"Enter Student Name:  ";
	cin>>name;
	cout<<endl;

	cout<<"Enter Subject 1 Marks:  ";
	cin>>sub1;
	cout<<endl;

	cout<<"Enter Subject 2 Marks:  ";
	cin>>sub2;
	cout<<endl;

	cout<<"Enter Subject 3 Marks:  ";
	cin>>sub3;
	cout<<endl;

	cout<<"Enter Subject 4 Marks:  ";
	cin>>sub4;
	cout<<endl;

	cout<<"Enter Subject 5 Marks:  ";
	cin>>sub5;
	cout<<endl;

	totalobtainedmarks=sub1+sub2+sub3+sub4+sub5;
	totobtmarkpercent=(totalobtainedmarks/500)*100;

	cout<<"Student "<<name<<", Obtained Percentage is "<<totobtmarkpercent;
		cout<<endl;


}