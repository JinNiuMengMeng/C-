#include <iostream>
int main(){
	using namespace std;
	int year = 0;
	cout <<  "what year was your house built?\n";
	cin >> year;
	cout << "what is its street address?\n";
	char address[80] = {0};
	cin.get();
	cin.getline(address, 80);
	cout << "year built:" << year << endl;
	cout << "you address : " << address << endl;

	cout << "Done\n";
	return 0;

}
