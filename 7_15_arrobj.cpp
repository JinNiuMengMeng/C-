#include <iostream>
#include <array>
#include <string>

using namespace std;
const int Season = 4;
const array<std::string, Season> Snames = {"Spring", "Summer", "Fall", "Winter"};

void fill(array<double, Season>*pa);
void show(array<double, Season>da);

int main(){
	array<double, Season> expense;
	fill(&expense);
	show(expense);
	return 0;
}
void fill(array<double, Season>*pa){
	for(int i = 0; i < Season; i++){
		cout << "Enter " << Snames[i] << ":";
		cin >> (*pa)[i];
	}
}
void show(array<double, Season>da){
	double total = 0.0;

	for(int i = 0; i < Season; i++){
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "total:" << total  << endl;
}
