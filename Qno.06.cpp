	#include <iostream>
#include <conio.h>
#include<iomanip>
using namespace std;
int main(){
char anychar;
int a , fact=1 , i;
do{
	cout<<"\nEnter the no. ";
	cin>>a;
	if(a==0){
	break;
cout<<"0 is invalid";
}
	for( i=a; i>1; i--){
		fact*=i;
	}
	cout<<"Factorial is : "<<fact;
	fact=1;
	cout<<"\nDo you want to continue(Y/N)";
 anychar=getch();
	if(anychar=='N'|| anychar=='n')
	break;
}while(anychar=='Y'||anychar=='y');
  
  return 0;
}
