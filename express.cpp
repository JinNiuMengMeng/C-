#include <iostream>
int main(){
	using namespace std;
	int x;
	
	for(int i = 0; i < 5; i++){

	cout << (x = 100) << endl;
	cout << "Now x = " << x << endl;

	cout << "Now x = " << (x > 100) << endl;

	cout.setf(ios_base::boolalpha);
	cout << "Now x = " << (x > 100) << endl;
	cout << "Now x = " << (x <= 100) << endl;
	}
}
