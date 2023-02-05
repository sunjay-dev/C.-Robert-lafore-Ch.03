#include <iostream>
#include <conio.h>
#include<iomanip>
using namespace std;
int main(){
  float first , second , third , fourth ;
char operater , mid;

do{
	cout<<"\nEnter the Equation: ";
	cin>>first>>operater>>second >>mid>>third>>operater>>fourth;
	
	switch(mid){
	case '+': cout<<"Answer is: "<<(first*fourth + second*third)/(second*fourth);
	break;	
	case '-': cout<<"Answer is: "<<(first*fourth - second*third)/(second*fourth);
	break;	
	case '*': cout<<"Answer is: "<<(first*third)/(second*fourth);
	break;	
	case '/': cout<<"Answer is: "<<(first*fourth)/(second*third);
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
