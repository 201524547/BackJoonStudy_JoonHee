#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){
	
	int a, b;
	
	cin >> a >> b;
	
	int* IntArr;
	
	IntArr = new int[a];
	
	for(int i = 0; i < a; i++){
		
		cin >> IntArr[i];
		
		if(IntArr[i] < b){
			
			cout << IntArr[i] << " ";
			
		}
		
		
	}
	
	return 0;
		
}
		
