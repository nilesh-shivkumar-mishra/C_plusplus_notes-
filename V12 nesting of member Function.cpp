#include<iostream>
#include<string> //important
using namespace std;

class binary{
	string s; // declar variable like  int
	public:
		void read(void);
		void chk_bin(void);
		void shafal(void);
		void display(void);
};

void binary :: read(void){
	cout<<"enter a binary number"<<endl;
	cin>>s; // taking input 
	}
	
void binary :: chk_bin(void){
	for (int i=0; i<s.length();i++)
	{
		if (s.at(i)!='0' && s.at(i)!='1'){
			cout<<"incoorect binary formate"<<endl;
			exit(0);
		}
	}
}

void binary :: shafal(void){
//	chk_bin(); // we are nesting function in onther function
	cout<<"shafal number 0 to 1 and 1 to 0"<<endl;
	for(int i=0;i<s.length();i++){
		if(s.at(i)=='1'){
			s.at(i)='0';
		}
		else{
			s.at(i)='1';
		}
	}
}

void binary :: display(void){
	for(int i=0;i<s.length();i++){
		cout<<s.at(i);
	}
}


int main(){
	binary b;
	b.read();
	b.chk_bin();
	b.shafal();
	b.display();
}
