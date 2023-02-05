#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int first , second ;
char operater;

do{
	cout<<"\nEnter the Equation: ";
	cin>>first>>operater>>second;
	
	switch(operater){
	case '+': cout<<"Answer is: "<<first+second;
	break;	
	case '-': cout<<"Answer is: "<<first-second;
	break;	
	case '*': cout<<"Answer is: "<<first*second;
	break;	
	case '/': cout<<"Answer is: "<<first/second;
	break;	
	default: cout<<"Invalid Operater.";
	}
	cout<<"\nDo you want to continue(Y/N). ";
	operater=getch();
	if(operater=='N'|| operater=='n')
	break;
}while(operater=='Y'||operater=='y');

return 0;
}
