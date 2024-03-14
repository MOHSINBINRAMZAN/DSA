#include<iostream>
using namespace td;

class Queue{
	int*arr;
	int front;
	int back;
	
	Queue(){
		arr=new int[n];
		front=-1;
		back=-1;
	}
	
	void Push(int x){
		if(back==n-1){
			cout<<"Queue overflow:";
		}
		back++;
	}
		arr[back]=x
	}
	
	void pop(){
		if (front==-1 || front>back){
			cout<<"empty queue:";
		}
		front++;
	}
	
	int peak(){
		if(front==-1 || front>back){
			cout<<"empty queue:";
		}
		arr[peak];
	}
	
	bool empty(){
		if(front==-1 || front>back){
			return true;
		}
		return false;
	}
};

int main(){
	queue q;
	
	q.push(1);
	q.push(2);
	
	q.pop();
	
	q.peek();
	
	cout<<q.empty();
	
}
	
}
