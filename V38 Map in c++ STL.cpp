#include<iostream>
#include<map>
#include<string>
using namespace std;



int main(){
	
	map<string , int > marksmap; // synatax = map<datatype of key , datatype of value > mapname
	marksmap["nilesh"]=48;
	marksmap["pal"]=99;
	marksmap["shivam"]=95;
	
	

	map<string , int>:: iterator it; // insertion 
	for( it=marksmap.begin();it!=marksmap.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<"\n";
	}
	
	cout<<"the size is :"<<marksmap.size()<<endl;
	cout<<"the max size is :"<<marksmap.max_size()<<endl;
//	cout<<"the max size is :"<<marksmap.empty<<endl;

	return 0;
}
