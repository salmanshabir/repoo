#include<iostream>
#include<cstdlib>
using namespace std;

int fact(int n){
	if(n==0)
	return 1;
	else{
		return n*fact(n-1);
	}
}
int main(){
	int n;
	cout<<"Enter any number"<<endl;
	cin>>n;
	cout<<"The factorial of given number is "<<fact(n);
	return 0;
		
}
