#include<iostream>
#include<vector> // include vector

using namespace std;

template <class T>
class hello{
	public:
	T size;
	T element;
	
	void display(vector<T> &v){
		for(T i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	}
	
    
	void fun(){
	vector<T> vec1; // synatax vector<int , float ,char datatypes yaar> vectorname {in this we use template so there is T in datatype section}

	
	cout<<"enter the size of vector : "<<endl;
	cin >>size;
	
	for(T i=0;i<size;i++){
		cout<<"enter element to be inserted : "<<endl;
		cin>>element;
		vec1.push_back(element); //  push will add it will add element in vector
	};
	
//	vec1.pop_back(); // syntax vectorname.function()
	display(vec1); // using display function
	cout<<""<<endl;
    vector<int> :: iterator  iter = vec1.begin(); // int ka jaga template use nahi ho raha ha
	vec1.insert(iter+1,5, 102);
	display(vec1);
	}
};

    int main(){
	hello<int> h;
	h.fun();

	return 0;
}
