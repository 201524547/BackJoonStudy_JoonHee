#include <iostream>
#include <stdlib.h>

using namespace std;

void swapInt(float &a, float &b){
	
	int k;
	k = a;
	a = b;
	b = k;
	
}

int main(){
	
	int a;
	
	cin >> a;
	
	float* intArr;
	
	intArr = new float[a];
	
	float sum = 0;
	
	for(int i = 0; i < a; i++){
		
		cin >> intArr[i];
		
		sum = sum + intArr[i];
		
	}
	
	float everage = sum / a;
	
	cout << everage << " ";
	for(int i = 0; i < a; i++){
		
		for(int j = 0; j < a-i; j++ ){
			if(intArr[j] < intArr[j+1]){
				swapInt(intArr[j],intArr[j+1]);
			}	
		}	
	}
	
	everage = everage / intArr[0] * 100;
	
	cout<<fixed;
	cout.precision(2);
	
	cout << everage;
	
	
	return 0;
		
}
		
