#include <iostream>
using namespace std;

class A {
	public:
		void set(int a, int b){
			i = a;
			j = b;
		}
		void print(){cout << "i = " << i << " j = " << j << endl;}
	private:
		int i;
		int j;
};
int main(){
//	A demo;
	A * demo = new A;
	demo->set(1, 2);
	demo->print();

	delete demo;
	return 0;
}
