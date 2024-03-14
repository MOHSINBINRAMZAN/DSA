#include<iostream>
using namespace std;

void Linear(int arr[],int size,int key){
	for(int i=0;i<=size;i++){
		if(arr[i]==key){
			return i;
		}
		
	}
}

int main(){
	int n,key;
	
	cout<<"enter the size of array:";
	cin>>n;
	
	int arr[n];
	cout<<"enter elemnts of array:";
	for(int i=0;i<=n;i++){
		cin>>arr[i];
	}
	
	cout<<"enter the key:";
	cin>>key;
	
	int result=Linear(arr,n,key);
	
	cout<<"the elemnts is at index: "<<result;
	
}
