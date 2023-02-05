#include <iostream>
#include <conio.h>
using namespace std;
int main(){
float temp;
	cout<<"Press 1 for Fahrenhiet to Celcius :\nPress 2 for Celcius to Fahrenhiet:\n";
	temp=getch();
	if(temp=='1'){
		system("CLS");
		cout<<"Enter the temperature in Fahrenhiet : ";
		cin>>temp;
		temp=(temp-32)/1.8;
		cout<<"The temperature in Celcius is : " <<temp;
	}
	else if(temp=='2'){
			system("CLS");
		cout<<"Enter the temperature in Celcius : ";
		cin>>temp;
		temp=(temp*1.8)+32;
		cout<<"The temperature in Fahrenhiet is : " <<temp;
	}
	else
	cout<<"Please Enter the correct number:";
  return 0;
}
