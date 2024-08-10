#include<iostream>
using namespace std;

template <class S>
class vector{
	public:
		/*int *arr;
		int size;
		
		vector(int m){
			size=m;
			arr = new int [size];
		}
		
		int dotproduct(vector &v){
			int d=0;
			for (int i =0 ; i<size ;i++){
				d += this->arr[i] * v.arr[i];
			}
				return d;
		} */
		
		S *arr;
		int size;
		
		vector(int m){
			size=m;
			arr = new S [size];
		}
		
		S dotproduct(vector &v){
			S d=0;
			for (int i =0 ; i<size ;i++){
				d += this->arr[i] * v.arr[i];
			}
				return d;
		}
};

int main(){
	vector<float>v1(3);
//	vector v1(3);
	v1.arr[0]=4.2;
	v1.arr[1]=3.5;
	v1.arr[2]=1.3	;
	vector <float> p2(3);
	p2.arr[0]=1.4;
	p2.arr[1]=0;
	p2.arr[2]=1.7;
	
	int a =v1.dotproduct(p2);
	cout<<a<<endl;
	return 0;
}
