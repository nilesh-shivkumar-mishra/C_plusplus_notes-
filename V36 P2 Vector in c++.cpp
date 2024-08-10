#include<iostream>
#include<vector>
using namespace std; 

void display(vector<char> &list){
	for(int i=0;i<list.size();i++){
		cout<<list[i]<<" " ;
	}
}
int main(){
	
	vector<char> name; // creating vector  syntax vector<datatype> vectorname
	
	
	name.push_back('n') ;
	name.push_back('i');
	name.push_back('l');
	name.push_back('e');
	name.push_back('s');
	name.push_back('h');
	display(name);
vector<char> surname(name); //creating vector help of another vector
	display(surname);
	
//	vector<int> vec(7,3); // use int in display function at up side to run
//	display(vec);
}
