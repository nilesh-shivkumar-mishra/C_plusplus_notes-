#include<iostream>
using namespace std;

int product(int a , int b){
//	static int c  = 0; //this execute only one time
//	c=c+1; //next time when you use thic function it will only execute 
	return a*b;
}

float moneyre (int CM , float FM=1.04){ // we declar  default value for FM
	return CM*FM;
}
int main(){
	int a=9;
	int b=8;
	cout<<product(a,b)<<endl;
	
	int Money =100;
	
	// we are using function moneyre in this statement =  moneyre(Money)  
	cout<<" if you have "<<Money<<"rs  in bank ac , you will recive"<<moneyre(Money)<<" rs after one year"<<endl;
	cout<<"for vip : if you have "<<Money<<"rs  in bank ac , you will recive"<<moneyre(Money,1.1)<<" rs after one year"<<endl; // now we are changing the default value 

	return 0;
}
