# include<iostream>
using namespace std;

int main(){
	
//	cout<<"hello world\n";  // it will print 
//    int g = 7;              // we want to put value in objext as integer the we put in int
//	cout<<"print hello" <<g<<"\n" ;  // we will passing g in these statement
//	cout<<"hello " <<g<<" world \n"; // it will print hello value of g then world (output =hello 7 world
//	
//	// input function is cin<<
//	
//	// example
//	
//	int a,b;
//	cout<<"enter value of a: \n";
//	cin>>a;
//	cout<<"enter value of b: \n";
//    cin>>b;
//	cout<<"sum of a and b id :" <<a+b <<endl;// <<end1 is same as \n next code will come in next line
//	cout<<"enter value of a :"<<endl; // <<end1 is same as \n
//	
	// operator in c++
	
	//artimatic operator
	int a =8;
	int b=7;
	cout<<"value of a and b is"<<a+b<<endl;
	cout<<"value of a and b is"<<a-b<<endl;
	cout<<"value of a and b is"<<a*b<<endl;
	cout<<"value of a and b is"<<a/b<<endl;
	cout<<"value of a and b is"<<a%b<<endl;
	cout<<"value of a++ is"<<a++<<endl;//print a then increase value of a
	cout<<"value of ++a  is"<<a--<<endl;//print value of a then then decrease value by 1 
	cout<<"value of a--  is"<< ++a<<endl; // first increse value then print
	cout<<"value of --a is"<<--a<<endl;//first decrease value then print
	

	
	//compraison operator (it will return in the form of true or false but in c++ true is 1 and false is 0)
	
    cout<<"value of a and b is"<<(a==b)<<endl;
	cout<<"value of a and b is"<<(a!=b)<<endl;
	cout<<"value of a and b is"<<(a>=b)<<endl;
	cout<<"value of a and b is"<<(a<=b)<<endl;
	cout<<"value of a and b is"<<(a>b)<<endl;
	cout<<"value of a and b is"<<(a<b)<<endl;
	
	// logical operator
	
	cout<<"following are the logical operator in C++"<<endl;
	cout<<"the value of this logical operator is "<<((a==b) && (a<b))<<endl; // && mean dono condition true ha to 1 return karaga agar 2no ma se ek bhi wrong ha tho 0 daga 
	cout<<"the value of this logical operator is"<<((a==b) || (a>b))<<endl;  // || operator return 1 if any one condition is true else it will return false
	
	return 0;	
}


















