#include <iostream>
#include <string>
using namespace std;

class guru{
	protected:
		string title;
		float rating;
	public:
		//constructor
		guru(string s, float r){
		    title = s;
			rating = r;
		}
	virtual	void display(){ //virtual function nahi ha ga ha to aaya run karaga agar laga ha tho appna appna run karaga
		 	cout<<" imp ha bhai "<<endl;
		}
};

class video:public guru{
	private:
		float videolength;
	public:
		video(string s , float r , float vl):guru(s,r){           // passing s and r value to constructor
		 videolength = vl;
	}
	void display (void){
		cout<<"tittle is"<<title<<endl;
		cout<<"rating :"<<rating<<endl;
		cout<<"video length"<<videolength<<endl;
	}
};

class text:public guru{
	private:
		int words;
	public:
		text(string s , float r , int wc): guru(s,r){           
		words = wc;
    }
    void display (void){
		cout<<"tittle is of text class  : "<<title<<endl;;
		cout<<"rating to text class:"<<rating<<endl;
		cout<<"words : "<<words<<endl;
	}
};
int main(){
	string title ;
	float rating , vl;
	int words;
	
	title ="c++";
	vl=5.6;
	rating=10.10;
	
	video objvideo(title,rating,vl); // dj is object of video object{how we call the constructor}
//	objvideo.display();
	
	title="text title";
	vl=99.9;
    words =10 ;
	text objtext(title , vl ,words);
//	objtext.display();
	
	guru * prt[2];
	prt[0]=&objvideo;
	prt[1]=&objtext;
	
	prt[0]->display();
	prt[1]->display();
}
