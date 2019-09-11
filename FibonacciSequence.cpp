#include <iostream>
using namespace std; 

// is the first fibonacci number, b = 2nd and n = nth
int rFibNum (int a, int b, int n){
	
	if (n == 1){
		return a; 
	}
	else if (n == 2)
		return b; 
		
	else
		return rFibNum(a, b, n -1)+ rFibNum(a, b, n-2); 
	
}

int main(){
	
	cout<<"Enter the first, second and nth fibonacci numbers "<<endl; 
	int a, b, n; 
	cin>>a>>b>>n; 
	cout<<" Nth FIBONACCI = "<<rFibNum(a, b, n); 
	
	
	
}
