
// stacticdata members & methods in c++
//(count ko kase increase kara different different class name ka lia (note=for same class name cout will increase properly with out satic mehod rules for without staticmethod( intialize count operant))

#include <iostream>
using namespace std;

class employee {
	static int count ; // to make the static operant
	int id;
	public:
		void setdata(void){
			cout<<"enter id "<<endl;
			cin>>id;
			count++;// if you writen up of cout it will increae then print give 1
		}
		void getdata (void){
			cout<<"the id of these varable is "<<id<<"counting"<<count<<endl;
//				count++; // if you writen downside it will first print 0 then increse
		}
		
		static void getcount(void){
		// you can take input of static variable in function
			cout<<"the value of count is"<<count<<endl;
		}
};

int employee :: count; // value of static variable is 0 by default

int main(){
	employee harry ,priya,janhvi , program; // employee class with different names
//	harry.id=1;  you cant asses because id and count come in private part
//	harry.count=1;

    harry.setdata();
    harry.getdata();
     employee::getcount(); // you can run satatic function directly without calssnameS 
    
    priya.setdata();
    priya.getdata();
     employee::getcount();
     
    janhvi.setdata();
    janhvi.getdata();
     employee::getcount();
     
    program.setdata();
    program.getdata();
     employee::getcount();
		return 0;
};


