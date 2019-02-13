#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int a;
	
	cin >> a;
	
	int b = a;
	int cycle = 0;
	
	int digit_10, digit_1;
	while(1){

		digit_10 = b / 10;
		digit_1 = b % 10;
		
		cycle++;
		
		int NewDigit_10 = digit_1;
		int NewDigit_1 = (digit_1 + digit_10)%10;
		
		b = 10*NewDigit_10 + NewDigit_1;
		
		if(a == b){
			break;
		}
	
	}
	
	cout << cycle;
		
}
		
