#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int guest , seats , i , arrengments;
	cout<<"Enter the no. of Guests: ";
	cin>>guest;
	cout<<"Enter the no. of seats: ";
	cin>>seats;
	
	for(i=1; i<=seats ;i++)
	{
		arrengments*=guest;
		guest--;
	}
	
	cout<<"\nThe number of possible arrengments are: "<<arrengments;
return 0;
}
