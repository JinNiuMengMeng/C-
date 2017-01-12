#include <iostream>
using namespace std;

struct travel_time{
	int hours;
	int mins;
};
const int Mins_per_hr = 60;

travel_time sum(travel_time t1, travel_time t2){
	travel_time total;
	total.hours = t1.hours + t2.hours + (t1.mins + t2.mins)/ Mins_per_hr;
	total.mins = (t1.mins + t2.mins)%Mins_per_hr;

	return total;
}

void show(travel_time t){
	cout << t.hours << " hours," << t.mins << " minutes" <<endl;
}
int main(){
	travel_time day1 = {5, 45};	
	travel_time day2 = {4, 55};	
	travel_time trip = sum(day1, day2);
	cout << "two day total:";
	show(trip);

	return 0;
}

