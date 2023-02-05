#include <iostream>
#include <conio.h>
using namespace std;
int main(){
  	char point;
	int pounds , shillings , pence , pounds1 , shillings1 , pence1;

do {
	system("CLS");
		cout<<"Enter 1st amount: ";
	cin>>pounds>>point>>shillings>>point>>pence;
		cout<<"Enter 1st amount: ";
	cin>>pounds1>>point>>shillings1>>point>>pence1;
	
	pounds+=pounds1;
	shillings+=shillings1;
	pence+=pence1;
	
	if(pence>11){
		shillings+=1;
		pence=0;
	}
	if(shillings>19){
		pounds+=1;
		shillings=0;
	}
	
	
	
	cout<<pounds<<"."<<shillings<<"."<<pence;
	
	cout<<"\nDo you wish to continue(Y/N)?";
	point=getch();
	if(point=='N'||point=='n'){
system("CLS");	
	break;
}
} while(point=='Y' || point=='y');
  
  return 0;
}
