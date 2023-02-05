#include <iostream>
using namespace std;
int main(){
char point , operater;
	int pounds , shillings , pence , pounds1 , shillings1 , pence1;
float x , y , shill;;
		cout<<"Enter 1st amount: ";
	cin>>pounds>>point>>shillings>>point>>pence;
	cout<<"Enter operater: ";
		operater=getche();
		cout<<"\nEnter 2nd amount: ";
		if(operater=='+'|| operater=='-')
cin>>pounds1>>point>>shillings1>>point>>pence1;
	if(operater=='*')
	cin>>x;
	
if(operater=='+'){

	pounds+=pounds1;
	shillings+=shillings1;
	pence+=pence1;
	
}
else if(operater=='-'){

	pounds-=pounds1;
	shillings-=shillings1;
	pence-=pence1;
	
	if(pence<0){
		shillings-=1;
		pence=12+pence ;
	}
	if(shillings<0){
		pounds-=1;
		shillings=20+shillings;
	}
}
else if(operater=='*'){
	//For shillings
	y=pounds*x;
	pounds=y;
  y-=pounds;
  	shillings1=12*y; 
  //for Pence
  	shill=shillings*x;
	  shillings=shill;
	shill-=shillings;
	pence1=20*shill;


	pence*=x;
	shillings+=shillings1;
	pence+=pence1;
}

if(operater=='+'|| operater=='*'){
	
	if(pence>=12){
		shillings+=1;
		pence-=12 ;
	}
	if(shillings>20){
		pounds+=1;
		shillings-=20;
	}
}

	cout<<pounds<<"."<<shillings<<"."<<pence;

  return 0;
}
