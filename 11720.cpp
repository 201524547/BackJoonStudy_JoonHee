#include <iostream>

using namespace std;

int main(){
	
	int a;
	char* b;
	cin>>a;
	b = new char[a];
	
	for(int i = 0; i < a; i++){
		
		cin >> b[i];
		
	}	
	
	int sum = 0;
	
	for(int t = 0 ; t < a; t++){
		
		sum = sum + (int)b[t] - 48;
		
	}

	cout << sum;

	return 0;	
}
