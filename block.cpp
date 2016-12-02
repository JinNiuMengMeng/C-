#include <iostream>
int main(){
	using namespace std;

	int x = 2;
	{
		cout << x <<endl;
		x = 200;
		int y = 3;
		cout << x <<endl;
		cout << y <<endl;
	}
		cout << x <<endl;
}
