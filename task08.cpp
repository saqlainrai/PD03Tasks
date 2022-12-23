#include <iostream>
using namespace std;

main(){

	system("cls");
	float vegprice;
	float fruprice;
	int vegkg;
	int frukg;
	float rps=1.94;
	float vegamount;
	float fruamount;
	float totalamount;
	float totalamountrps;
	

	cout<<"Enter Vegetable Price per Kilogram: ";
	cin>>vegprice;
	cout<<endl;

	cout<<"Enter Fruit Price per Kilogram: ";
	cin>>fruprice;
	cout<<endl;

	cout<<"Enter Total Kilograms of Vegetable: ";
	cin>>vegkg;
	cout<<endl;

	cout<<"Enter Total Kilograms of Fruit: ";
	cin>>frukg;
	cout<<endl;
	
	vegamount=vegkg*vegprice;
	fruamount=frukg*fruprice;
	totalamount=vegamount+fruamount;
	totalamountrps=totalamount/rps;

	
	cout<<endl;	
	cout<<"    Total amount in Rupees: "<<totalamountrps<<endl;
	cout<<endl;


}