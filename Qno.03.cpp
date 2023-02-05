#include <iostream>
#include <conio.h>
using namespace std;
int main(){
  	long continer=0;
	char value;
	for(int i=1;i<=6;i++){
	cout<<endl<<"Enter a number: ";
		value=getche();
		value-='0';
		continer*=10;
		continer+=value;
}
	
	cout<<endl<<"number is: "<<continer;
  return 0;
}
