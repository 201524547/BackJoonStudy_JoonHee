#include <iostream>

using namespace std;


int MonthToDate(int Month){
	
	int Date = 0;
	
	for(int i = 0; i < Month -1; i++){
		
		if((i+1) == 1||(i+1) == 3||(i+1) == 5||(i+1) == 7||(i+1) == 8||(i+1) == 10){
			Date = Date + 31;
		}
		else if((i+1) == 4||(i+1) == 6||(i+1) == 9||(i+1) == 11){
			Date = Date + 30;
		}
		else{
			Date = Date + 28;
		}
	}
	
	return Date;
	
}

int main(){
	
	int Month, Date;
	
	cin >> Month >> Date;
	
	int Date_2017 = MonthToDate(Month) + Date;
	
	Date_2017 = Date_2017%7;
	
	switch(Date_2017){
		
		case 0:
			cout<<"SUN";
			break;
		case 1:
			cout<<"MON";
			break;
		case 2:
			cout<<"TUE";
			break;
		case 3:
			cout<<"WED";
			break;
		case 4:
			cout<<"THU";
			break;
		case 5:
			cout<<"FRI";
			break;
		case 6:
			cout<<"SAT";
			break;		
		
	}
	
	return 0;
	
}
