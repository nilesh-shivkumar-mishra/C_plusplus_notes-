#include <iostream>
using namespace std;

class person{
	private:
		int chemistry;
		int biology;
	public:
		//constructor
	person(int a , int b ):chemistry(a) , biology(b+chemistry) //we can intialize value of variable useing constructor (rule jo phelea private variable declar hua ha usa 1 position pa rakho jo dusapa hua ha usa dusara pa)
	{
		cout<<"this is constructor"<<endl;
		cout<<"value of chemistry is"<<chemistry<<endl;
		cout<<"value of biology is"<<biology<<endl;
	}
};

int main(){
	person p(54,44);
}
