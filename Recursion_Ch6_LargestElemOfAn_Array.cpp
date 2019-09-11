#include <iostream>
#include <vector>
using namespace std; 

int largest(const int list[], int lowerIndex, int upperIndex){
	
	int max; 
	
	if (lowerIndex >= upperIndex){
		return max = lowerIndex; 
		
	}
	else{
		max = largest(list, lowerIndex+1, upperIndex); 
		if (list[lowerIndex]>= max){
			max = list[lowerIndex]; 
		}
		else
			return max; 
		
	}
	

}

int main(){
	
	cout<<"Welcome to recursion "<<endl; 
	int myInt[]= {1, 2, 3, 4, 5}; 
	cout<<"The largerst element is " <<largest(myInt, 0, 5); 
	return 0; 
}


