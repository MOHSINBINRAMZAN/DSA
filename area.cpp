#include<iostream>
using namespace std;

class Area{
	private:
	double length;
	double breadth;
	public:
	Area(int l,int b){
		length=l;
		breadth=b;
	}
	
	double GetArea(){
		return length*breadth;
	}
};

int main(){
	int len,bre;
	
	cout<<"enter the legth of the triangle: "<<endl;
	cin>>len;
	
	cout<<"enter the breadth of triangle:"<<endl;
	cin>>bre;
	
	Area GetArea(len,bre);
	
	double result=Area.GetArea();
	
	cout<<"the area of triangle is: "<<result;
}
