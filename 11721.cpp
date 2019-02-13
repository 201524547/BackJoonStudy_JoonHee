#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	string str;
	
	cin >> str;
	
	int len;
	len = str.length();
	
	char gg[len];
	
	strcpy(gg, str.c_str());
	

	for(int i = 0; i < len; i++){
		
		cout<<gg[i];
		
		if((i+1)%10 == 0){
			
			cout<<"\n";
			
		}
		
	}
		
	return 0;
	
}
