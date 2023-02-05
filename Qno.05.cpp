#include <iostream>
#include <conio.h>
#include<iomanip>
using namespace std;
int main(){
string a="X" , b="XX";
int n=25;
for(int i=1 ; i<=20; i++){
	cout<<setfill(' ')<<setw(n)<<a;
cout<<endl;
	a=a+b;
	n+=1;
}
return 0;
}
