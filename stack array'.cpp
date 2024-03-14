#include<iostream>
using namespace std;

#define n50

class stack{
	int*arr;
	int top;
	
	stack(){
		arr=new int[n];
		top==-1;
	}
	
	void push(int x){
		if(top==n-1){
			cout<<"stack overflow:";
		}
		top++;
	}
	arr[top]=x;
	
	void pop(){
		if(top==-1){
			cout<<"stack is empty:";
		}
		top--;
	}
	
	int Top(){
		if(top==-1){
			cout<<"stack empty:";
		}
		return arr[Top];
	}
	
	bool empty(){
		if(top==-1){
			cout<<"stack empty:";
			return true;
		}
		return false;
	}
};

int main(){
	stack s;
	
	s.push(1);
	s.push(2);
	s.push(3);
	
	s.pop();
	s.pop();
	
	s.Top();
	
	cout<<s.empty();
}
