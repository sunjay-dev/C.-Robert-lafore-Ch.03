#include <iostream>
#include <conio.h>
using namespace std;
int main(){
  
  	int t=0;
	float intial , year , rate , total;
	cout<<"Enter intial amount: ";
	cin>>intial;
	cout<<"Enter ending amount: ";
	cin>>end;
	cout<<"Enter intrest rate (percent per year): ";
	cin>>rate;
	rate=rate/100;
	do{
		total=intial+(intial*rate);
		
		intial=total;
		t++;
	}while(end>=total);
	cout<<t;
	
  return 0;
}
