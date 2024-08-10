#include<iostream>
#include <string>
#include<fstream> //for operation on file we have to import fstream
using namespace std;
/*
The usefull classes for working with files in c++ are:
1.fstreambase
2.ifstream--> dereived from fstreambase 
2. ofstream-->dereived from fstreambase 

in order to work with file in c++ you will have to open it . primarly , ther two way to open a file:
1.using constructor
2.using the fuctiom open() of the class 
*/

int main(){

	
// how to write content in a file
		
//	string st = "harry sir";  // string is datatype and st is variable of that datatype value of variable is harry sir
//	ofstream out("samplefile.txt"); 	// opening file
//	out <<st;


//
	
//	//it will read on one word

//	string st2;
//	ifstream in("samplefile.txt");
//	in>>st2;  // because of in
//	cout<<st2;
	
	// 
	
//	string st3;
//   	ifstream in("samplefile.txt");
//	getline(in ,st3); // for printing singlw line {it will print first line}
//	getline(in ,st3); // it will print second line and override 1 one{that mean it will print only second line}
//	cout<<st3;
	
// reading and writing in a file
	
//	ofstream nilesh("samplefile.txt");
//	cout<<"enter you name"<<endl;
//	string name;
//	cin>>name;
//	
//	nilesh<<"my name is "<< name;
//	
//	nilesh.close(); 
//	
//	ifstream hin("samplefile.txt");
//	string content;
//	hin>>content;
//	cout<<"content of file is"<<content<<endl;
//	hin.close();

//	

// file operation using open() and close () function

ofstream out;
out.open("samplefile.txt");
out<<"this is me"<<endl;
out<<"this you me also"<<endl;
out.close();

//reading the content of a file

ifstream in;
string st,st1;
in.open("samplefile.txt");
in>>st>>st1; // in out in 2 variable it will give 1 and 2 words
cout<<st<<st1;
in.close();


//it will read all the content of a file using while loop

//ifstream in;
//string st;
//in.open("samplefile.txt");
//
//// it will print linewhole 
//while(in.eof()==0){
//	getline(in,st);
//	cout<<st;
//}
//
//in.close();

//	return 0;


}
