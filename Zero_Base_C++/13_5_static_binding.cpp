#include <iostream>
using namespace std;

class BaseClassA{
	public:
	virtual	int get(){return 1;}
};
class BaseClassB : public BaseClassA{
	public:
		int get(){return 2;}
};
int main(){
	BaseClassA Atest;
	BaseClassB Btest;
	int a, b;
	a = Atest.get();
	b = Btest.get();
	cout << "Atest.get(): " << a << endl;
	cout << "Btest.get(): " << b << endl;

	return 0;
}
