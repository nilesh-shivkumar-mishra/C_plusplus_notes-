#include<iostream>
using namespace std;

// we created the function

// sum rules:
// syntax = type function-name (argument);
//int sum (int a, int b); =  acceptable 
//int sun(int a ,b );  = not acceptable

void p(void){
	cout<<"good morning ,hello";
}

int sum (int a, int b){
	int c = a+b;
	return c;
}

int main(){
	int a;
	int b;
	cout<<"enter the value of a :"<<endl;
	cin>>a;
	cout<<"enter the value of b :"<<endl;
	cin>>b;
	cout<<"sum of a and b is "<<sum(a ,b); // we use sum function we declar at up
	void p(void);
	return 0;
	
}

// void is for it will not take argument to perfoerm task



