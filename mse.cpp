#include<iostream>
using namespace std;

class triangle{
	public:
		int base;
		int length;
		int hyp;
		
		triangle(int b,int l, int h){
			base= b;
			length= l;
			hyp= h;
		}
		
		int calperi(){
			return length+base+hyp;
		}
		
		int calArea(){
			return (length*base)/2;
		}
};

int main(){
	triangle triangleobj1(4,8,45);
	triangle triangleobj2(12,45,65);
	
	cout<<"perimeter :"<<triangleobj1.calperi();
	cout<<endl;
	cout<<"area :"<<triangleobj2.calArea();
	
	
	
}


