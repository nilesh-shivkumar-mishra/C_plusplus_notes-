//
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	float x=455;
	float & y=x;  // y is x
	cout<<x<<endl;
	cout<<y<<endl;
	
	int a =99;
	float b=99.98;
	cout<<"converting in float "<<(int)a<<endl; //converting a integer (int)x
	cout<<"converting in int "<<(float)a<<endl;
	
	cout<<"converting in float "<<int(b)<<endl; // we acn also convert from these method int(x)
	cout<<"converting in int "<<(float)(b)<<endl;
	
	cout<<"sum of a and b is "<<a+b<<endl; //output is 198.98
	cout<<"sum of a and b is whwn you convert b as integer "<<a+(int)b<<endl; //converting b 99.98 in int 99 then plus output is 198
	
	// constant in c++
	
   int bo=90;
   cout<<bo;// it will give you 90
   bo=99; //value of b is change no
   cout<<bo;// it will give 99

  // but when we use const we cannot change value 
	const int v=99;
  // v =90;  it will give you an error becoure we declar v is constant in previous line the we can't change the value of v

//setw for using setw first you want to add #include<iomanip> on top
int m=99999;
int n= 9;

// manuplator in c++
//without setw
cout<<"value of of n : "<<n<<endl;
cout<<"value of of m : "<<m<<endl;
	
//with setw
cout<<"value of of n : "<<setw(4)<<n<<"helo"<<endl; //setw is reserve the place that you have number with setw (output = value of of n :    9helo)
cout<<"value of of m : "<<setw(4)<<m<<"hello"<<endl;
	
//operator precedence
	int p =3;
	int l =3;
	
	int h =(p*l)+5;
	cout<<h<<endl;
	
	//go check presedence table in website
	int g =((((p*l)+8)-9)+99);
	cout<<g<<endl;
	
	return 0;	
}
