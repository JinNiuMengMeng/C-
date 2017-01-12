#include <iostream>
int main(){
	using namespace std;

	int a = 20;
	for(int i = 0; i < 2; i++){
		cout << "a:" << a <<endl;

		a += ++a;
		cout << "a:" << a <<endl;
		cout << "a:" << a <<endl;
	}
	return 0;
}
