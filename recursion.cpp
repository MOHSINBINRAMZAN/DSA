#include<iostream>
using namespace std;
 
 int factorial(int num){
 	if(num<=0){
 		return 1;
	 }
	 else{
	 	return num *factorial(num-1);
	 }
 }
 
 int main(){
 	int n;
 	
 	cout<<"enter the number:";
 	cin>>n;
 	
 	int result=factorial(n);
 	
 	cout<<"the factorial of "<<n<<"is"<<result<<endl;
 }
