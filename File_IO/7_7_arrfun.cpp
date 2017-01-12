#include <iostream>
using namespace std;

const int Max = 5;
int fill_array(double *ar, int limit);

int main(){
	double properties[Max];
	int size = fill_array(properties, Max);

	if(size > 0){
		cout << "Enter revaluation faction:";
		double factor;
		while( !(cin >> factor)){
			cin.clear();
			while(cin.get() == '\n'){
				cout << "Bad input; please enter a number:" << endl;
				continue;
			}
			cout << "Bad input; please enter a number:" ;
		}
	}
	return 0;
}

int fill_array(double *ar, int limit){
	double temp;
	int i;
	for(i = 0; i < limit; i++){
		cout << "Enter value #" << (i + 1) << ":";
		cin >> temp;

		ar[i] = temp;
	}
	return i;
}
