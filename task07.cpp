#include <iostream>
using namespace std;

main(){

	system("cls");
	string name;
	int adultprice;
	int childprice;
	int adticketsold;
	int chticketsold;
	float percent;
	int pricefromadult;
	int pricefromchild;
	int totalamount;
	float amounttodonate;
	float remamount;
 	
	cout<<endl;
	cout<<"Enter Name of Movie: ";
	cin>>name;
	cout<<endl;

	cout<<"Enter Adult Ticket Price: ";
	cin>>adultprice;
	cout<<endl;

	cout<<"Enter Child Ticket Price: ";
	cin>>childprice;
	cout<<endl;

	cout<<"Enter Number of Adult Ticket Sold: ";
	cin>>adticketsold;
	cout<<endl;

	cout<<"Enter Number of Child Ticket Sold: ";
	cin>>chticketsold;
	cout<<endl;

	cout<<"Enter Percentage to donate: ";
	cin>>percent;
	cout<<endl;
	
	pricefromadult=adultprice*adticketsold;
	pricefromchild=childprice*chticketsold;
	totalamount=pricefromadult+pricefromchild;
	amounttodonate=(percent/100)*totalamount;
	remamount=totalamount-amounttodonate;
	
	cout<<"_____________________________________________________________"<<endl;
	cout<<endl;	
	cout<<"Total Amount Generated: "<<totalamount<<endl;
	cout<<"Amount After Donation: "<<remamount<<endl;
	cout<<endl;


}