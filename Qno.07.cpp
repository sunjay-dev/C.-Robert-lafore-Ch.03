#include <iostream>
#include <conio.h>
#include<iomanip>
using namespace std;
int main(){
  float intial , year , rate , total;
	cout<<"Enter intial amount: ";
	cin>>intial;
	cout<<"Enter number of years: ";
	cin>>year;
	cout<<"Enter intrest rate (percent per year): ";
	cin>>rate;
	rate=rate/100;
	for(int i=1; i<=year ; i++){
		total=intial+(intial*rate);
		
		intial=total;
	}
	cout<<"At the end of "<< year<< " years, you will have "<<total <<" dollars.";
  return 0;
}
