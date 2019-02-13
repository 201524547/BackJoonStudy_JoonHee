#include <iostream>
#include <stdlib.h>

using namespace std;

void swapInt(int &a, int &b){
	
	int k;
	k = a;
	a = b;
	b = k;
	
}


int main(){
	
	int a[3];
	
	cin >> a[0] >> a[1] >> a[2];
	
	for(int i = 0; i < 2; i++){
		
		for(int j = 0; j < 2-i; j++ ){
			
			if(a[j] < a[j+1]){
				swapInt(a[j],a[j+1]);
			}
			
		}
		
	}
	
	
	cout << a[1];
	
	return 0;
		
	}
		
