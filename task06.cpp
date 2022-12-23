#include <iostream>
using namespace std;

main(){

	system("cls");
	float size;
	float cost;
	float area;
	float out1;
	float out2;
	
	cout<<"Enter the size of Bag in Pounds: ";
	cin>>size;
	cout<<endl;

	cout<<"Enter the Cost of Bag: ";
	cin>>cost;
	cout<<endl;

	cout<<"Enter Area covered by Bag in square feet: ";
	cin>>area;
	cout<<endl;
	
	out1=cost/size;
	out2=cost/area;

	cout<<"______________________________________________________________"<<endl;
	cout<<endl;	
	cout<<"Cost of Fertilizer per Pound: "<<out1<<endl;
	cout<<"Cost of Fertilizing the area per square feet: "<<out2<<endl;
	cout<<endl;


}