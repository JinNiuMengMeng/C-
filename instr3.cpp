#include <iostream>
int main(){
	using namespace std;
	const int Arsize = 20;
	char name[Arsize];
	char dessert[Arsize];

	cout << "Enter you name:\n";
	cin.get(name, Arsize);
	cin.get();
	cout << "Enter you favorite dessert:\n";
	cin.get(dessert, Arsize).get();
	cout << "I have some delicious " << dessert;
	cout << " for you , " << name << "!" << endl;
	return 0;
	
}
