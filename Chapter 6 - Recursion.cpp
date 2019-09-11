#include <iostream>
using namespace std; 

int fact(int n){
	
	if (n == 0)
		return 1; 
	
	else 
		fact(n - 1); 
}


int main(){
	
	cout<<"Enter a number "<<endl; 
	int number; 
	cin>>number; 
	
	cout<<"The factorial for  "<<number<<"is "<<fact(number)<<endl; 
	
	
}
