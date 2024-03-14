#include<iostream>
using namespace std;

int Binary(int arr[]int size, int key){
	int start=0;
	int end=size;
	for(int i=0;i<=size;i++){
		int mid=(start+end)/2;
		
		if(arr[mid]>key){
			end=mid-1;
		}
		else if(arr[mid]<key){
			start=mid+1;
		}
		else{
			return arrr[mid];
		}
	}
}

void printArray(int arr[],int size, int key){
	for(int i=0;i<=size;i++){
		cout<<arr[i];
	}
}

int main(){
	int n,key;
	
	cout<<"enter the size of array:";
	cin>>n;
	int arr[n];
	cout<<"enter elemnts of array:";
	for(int i=0;i<=size;i++){
		cin>>arr[i];
	}
	
	cout<<"enter the key:";
	cin>>key;
	
	int result =Binary(arr,n,key);
	
	cout<<"the elemnt is presnt on :"<<result;
}
